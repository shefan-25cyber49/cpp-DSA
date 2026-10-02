// 2D Array using single-pointers
#include <iostream>
using namespace std;

int main()
{

    int *A[3],i,j;
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            A[i][j] = i+j;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}