// C++ Class for Sparse matrix
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
    void read()
    {
        cout << "Enter the non-zero elements(row column value) :" << endl;
        for (int i = 0; i < num; i++)
        {
            cin >> ele[i].I >> ele[i].J >> ele[i].X;
        }
    }
    void display()
    {
        int i, j, k = 0;
        printf("\nMatrix:-\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (ele[k].I == i && ele[k].J == j)
                    cout << ele[k++].X << " ";
                else
                    cout << "0 ";
            }
            cout << endl;
        }
    }
};


int main()
{
    spa s1(5,5,5);
    s1.read();
    s1.display();
    return 0;
}