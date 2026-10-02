// C++ Class for Sparse matrix using insertion & extraction
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
    friend istream &operator>>(istream &is, spa &s); // insertion
    friend ostream &operator<<(ostream &os, spa &s); // extraction
};

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
    printf("\nMatrix:-\n");
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
    cin >> s1;
    cout << s1;
    return 0;
}