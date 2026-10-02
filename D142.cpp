// C++ Class for Adding two Sparse matrix using Operator-Overloading
#include <iostream>
using namespace std;

class element
{
public:
    int I; // row no.
    int J; // column no.
    int X; // value
};
class spa
{
private:
    int m;   // rows
    int n;   // columns
    int num; // no. of non-zero elements
    struct element *ele;

public:
    spa(int m, int n, int num)
    {
        this->m = m;
        this->n = n;
        this->num = num;
        ele = new element[this->num];
    }
    ~spa()
    {
        delete[] ele;
    }
    spa operator+(spa &s);
    friend istream &operator>>(istream &is, spa &s); // insertion
    friend ostream &operator<<(ostream &os, spa &s); // extraction
};

spa spa::operator+(spa &s)
{
    if (m == s.m || n == s.n)
    {
        int i, j, k;
        spa *sum = new spa(m, n, num + s.num);
        i = j = k = 0;
        while (i < num && j < s.num)
        {
            if (ele[i].I < s.ele[j].I)
            {
                sum->ele[k++] = ele[i++];
            }
            else if (ele[i].I > s.ele[j].I)
            {
                sum->ele[k++] = s.ele[j++];
            }
            else
            {
                if (ele[i].J < s.ele[j].J)
                {
                    sum->ele[k++] = ele[i++];
                }
                else if (ele[i].J > s.ele[j].J)
                {
                    sum->ele[k++] = s.ele[j++];
                }
                else
                {
                    sum->ele[k].I = ele[i].I;
                    sum->ele[k].J = ele[i].J;
                    sum->ele[k].X = ele[i].X + s.ele[j].X;
                    k++;
                    i++;
                    j++;
                }
            }
        }
        for (; i < num; i++)
            sum->ele[k++] = ele[i];
        for (; j < s.num; j++)
            sum->ele[k++] = s.ele[j];

        sum->num = k;
        return *sum;
    }
}

istream &operator>>(istream &is, spa &s)
{
    cout << "Enter the non-zero elements(row column value) :" << endl;
    for (int i = 0; i < s.num; i++)
    {
        cin >> s.ele[i].I >> s.ele[i].J >> s.ele[i].X;
    }
    return is;
}

ostream &operator<<(ostream &os, spa &s)
{
    int i, j, k = 0;
    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; j++)
        {
            if (s.ele[k].I == i && s.ele[k].J == j)
                cout << s.ele[k++].X << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
    return os;
}

int main()
{
    spa s1(5, 5, 5);
    spa s2(5, 5, 5);

    cout << "For Matrix A :-" << endl;
    cin >> s1;
    cout << "For Matrix B :-" << endl;
    cin >> s2;
    spa sum = s1 + s2;

    cout << "Matrix A :-" << endl
         << s1 << endl;
    cout << "Matrix B :-" << endl
         << s2 << endl;
    cout << "Matrix A+B :-" << endl
         << sum << endl;
    return 0;
}