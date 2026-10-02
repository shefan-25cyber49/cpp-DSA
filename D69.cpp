// 2D Array using double-pointers
#include <iostream>
using namespace std;

int main()
{

    int **A, i, j;
    A = (int **)new int *[3];
    A[0] = (int *)new int[4];
    A[1] = (int *)new int[4];
    A[2] = (int *)new int[4];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            A[i][j] = i + j;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}