// Find a pair(a,b) with k = a+b = 10
#include <iostream>
using namespace std;

int main()
{
    int i, j, k = 10, n = 10;
    int A[10] = {6, 3, 8, 10, 4, 7, 5, 2, 9, 14};
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (A[i] + A[j] == k)
            {
                printf("(%d,%d)\n", A[i], A[j]);
            }
        }
    }
    return 0;
}