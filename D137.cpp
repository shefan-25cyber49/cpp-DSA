// Tri-Diagonal Matrix
#include <iostream>
using namespace std;

struct matrix
{
    int A[13];
    int n;
};

void setM(struct matrix *M, int i, int j, int x)
{
    if (i - j == 1)
        M->A[i - 2] = x;
    else if (i - j == 0)
        M->A[M->n + i - 2] = x;
    else if (i - j == -1)
        M->A[2 * M->n + i - 2] = x;
}
int getM(struct matrix M, int i, int j)
{
    if (i - j == 1)
        return M.A[i - 2];
    else if (i - j == 0)
        return M.A[M.n + i - 2];
    else if (i - j == -1)
        return M.A[2 * M.n + i - 2];
    else
        return 0;
}
void display(struct matrix M)
{
    int i, j;
    cout << endl
         << "Matrix :-" << endl;
    for (i = 1; i <= M.n; i++)
    {
        for (j = 1; j <= M.n; j++)
        {
            if (i - j == 1)
                cout << M.A[i - 2] << " ";
            else if (i - j == 0)
                cout << M.A[M.n + i - 2] << " ";
            else if (i - j == -1)
                cout << M.A[2 * M.n + i - 2] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
int main()
{
    struct matrix m;
    int i, j, x;

    cout << "Enter the order of matrix : ";
    cin >> m.n;

    cout << "Enter the elements of tri-diagonal matrix : " << endl;
    for (i = 1; i <= m.n; i++)
    {
        for (j = 1; j <= m.n; j++)
        {
            if (abs(i - j) <= 1)
            {
                cin >> x;
                setM(&m, i, j, x);
            }
            else
                cin >> x;
        }
    }

    display(m);
    return 0;
}