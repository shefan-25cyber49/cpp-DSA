// Find multiple Missing Elements (FASTER) in a sorted array

#include <iostream>
using namespace std;

int main()
{
    int l = 1, h = 12, n = 10, i;
    int A[10] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    int H[15] = {0}; // HASH-TABLE or bit-set : constant time
    for (i = 0; i < n; i++)
    {
        H[A[i]]++; // 0->1
    }

    cout << "Missing Elements : " << endl;
    for (i = l; i <= h; i++)
    {
        if (H[i] == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}