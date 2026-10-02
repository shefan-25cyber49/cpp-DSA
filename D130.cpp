// Menu Driven Program for Diagonal Matrix
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
    cout << endl
         << "Matrix :-" << endl;
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
    int ch = 0, i, j, x;
    cout << "Enter the Order of Matrix : ";
    cin >> m.n;
    cout << "Enter the Diagonal Elements : " << endl;

    for (i = 0; i < m.n; i++)
    {
        for (j = 0; j < m.n; j++)
        {
            if (i == j)
            {
                printf("[%d,%d] : ", i, j);
                cin >> m.A[i];
            }
        }
    }

    cout << endl
         << "MENU : (1) Display, (2) Set, (3) Get, (4) Exit." << endl;

    while (ch < 4)
    {
        cout << endl
             << "Enter your Choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            display(m);
            break;
        case 2:
            cout << endl
                 << "Enter the Index[i,i] : ";
            cin >> i;
            j = i;
            if (i < m.n && j < m.n)
            {
                cout << "Enter the Element to set : ";
                cin >> x;
                setM(&m, i, j, x);
            }
            else
                cout << "Invalid index." << endl;
            break;
        case 3:
            cout << endl
                 << "Enter the Index[i,j] : " << endl;
            cin >> i;
            cin >> j;
            if (i < m.n && j < m.n)
                cout << "Element at " << i << "," << j << " is : " << getM(m, i, j) << endl;
            else
                cout << "Invalid index." << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}