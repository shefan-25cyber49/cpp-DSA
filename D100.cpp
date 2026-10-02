// Find a single Missing Elements in a sorted array

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {6, 7, 8, 9, 10, 11, 13, 14, 15, 16};
    int l = 6,n=10;
    int diff = l - 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            cout << "Missing Element : " << i + diff << endl;
            break;
        }
    }

    return 0;
}