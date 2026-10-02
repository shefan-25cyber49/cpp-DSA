// Counting Duplicate Elements in a sorted array
#include <iostream>
using namespace std;

int main()
{
    int n = 10, i, j;
    int A[10] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    cout << "Duplicates : " << endl;
    for (i = 0; i < n - 1; i++)
    {
        if (A[i] == A[i + 1])
        {
            j = i + 1;
            while (A[j] == A[i])
                j++;
            cout << A[i] << " is Appearing : " << j - i << " Times." << endl;
            i = j - 1;
        }
    }
    return 0;
}