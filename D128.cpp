// MATRICES - Diagonal Matrix
#include <iostream>
using namespace std;

struct matrix
{
    int A[10];
    int n;
};

void setM(struct matrix *M, int i, int j, int x)
{
    if (i == j)
        M->A[i] = x;
}
int getM(struct matrix M, int i, int j)
{
    if (i == j)
        return M.A[i];
    else
        return 0;
}
void display(struct matrix M)
{
    int i, j;
    for (i = 0; i < M.n; i++)
    {
        for (j = 0; j < M.n; j++)
        {
            if (i == j)
                cout << M.A[i] << " ";
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
    setM(&m, 0, 0, 5);
    setM(&m, 1, 1, 8);
    setM(&m, 2, 2, 9);
    setM(&m, 3, 3, 1);
    display(m);
    cout << "Element at 1,1 : " << getM(m, 1, 1);
    return 0;
}