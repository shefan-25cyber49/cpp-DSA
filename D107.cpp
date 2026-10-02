// Finding Duplicate Elements in a Unsorted array by Hash-Table
#include <iostream>
using namespace std;

int main()
{
    int n = 10, count;
    int A[10] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int H[10] = {0};
    cout << "Duplicates : " << endl;
    for (int i = 0; i < n; i++)
    {
      H[A[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (H[i] > 1)
        {
            cout << i << " : " << H[i] << " times." << endl;
        }
    
    }
    
    return 0;
}