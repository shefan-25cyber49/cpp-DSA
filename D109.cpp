// Find a pair(a,b) with k = a+b, by Hash-Table
#include <iostream>
using namespace std;

int main()
{
    int i,j,k = 10, n = 10;
    int A[10] = {6, 3, 8, 10, 4, 7, 5, 2, 9, 14};
    int H[15] = {0};
    for (i = 0; i < n; i++)
    {
       j = k-A[i];
       if (H[j]!=0)
       {
        printf("(%d,%d)\n",A[i],j);
       }
       H[A[i]]++;
    }
    return 0;
}