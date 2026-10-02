// Find a pair(a,b) with d = b-a = 10
#include <iostream>
using namespace std;

int main()
{
    int d = 10, n = 10;
    int A[10] = {2, 4, 6, 11, 13, 16, 19, 23, 25, 27};
    int i = 0, j = 1;

    while (j < n)
    {
        if (A[j] - A[i] < d)
            j++;
        else if (A[j] - A[i] > d)
            i++;
        else
            break;
    }
    if (j < n)
    {
        printf("(%d,%d)\n", A[i], A[j]);
    }
    return 0;
}