// Find a pair(a,b) with k = a+b = 10 in sorted array
#include <iostream>
using namespace std;

int main()
{
    int k = 10, n = 10;
    int i = 0, j = n - 1;
    int A[10] = {1, 2, 4, 5, 6, 8, 9, 10, 12, 14};

    while (i < j)
    {
        if (A[i] + A[j] == k)
            printf("(%d,%d)\n", A[i++], A[j--]);
        else if (A[i] + A[j] < k)
            i++;
        else
            j--;
    }

    return 0;
}