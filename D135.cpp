// Upper Triangular Matrix - column major formulae
#include <iostream>
using namespace std;
struct matrix
{
    int *A;
    int n;
};
void setM(struct matrix *M, int i, int j, int x)
{
    if (i <= j)
        M->A[j * (j - 1) / 2 + i - 1] = x;
}
int getM(struct matrix M, int i, int j)
{
    if (i <= j)
        return M.A[j * (j - 1) / 2 + i - 1];
    else
        return 0;
}
void display(struct matrix M)
{
    int i, j;
    cout << "Matrix :-" << endl;
    for (i = 1; i <= M.n; i++)
    {
        for (j = 1; j <= M.n; j++)
        {
            if (i <= j)
                cout << M.A[j * (j - 1) / 2 + i - 1] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    struct matrix m;
    m.n = 4;
    int size = m.n * (m.n + 1) / 2;
    m.A = new int[size];
    cout << "Enter the Elements : " << endl;
    int i, j, x;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            cin >> x;
            setM(&m, i, j, x);
        }
    }
    cout << endl;
    display(m);
    return 0;
}