// Find multiple Missing Elements in a sorted array

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {6, 7, 8, 9, 11, 12, 15, 16, 17, 18};
    int l = 6, n = 10;
    int diff = l - 0;
    cout << "Missing Elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] - i != diff)
        {
            while (diff < arr[i] - i)
            {
                cout << i + diff << endl;
                diff++;
            }
        }
    }
    return 0;
}