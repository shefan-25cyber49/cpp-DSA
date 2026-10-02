// Find a single Missing Elements in a sorted array using loops

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 8, 9, 10, 11};
    int sum = 0, n = 11, s;
    for (int i = 0; i < 10; i++)
    {
        sum += arr[i];
    }
    s = n * (n + 1) / 2;
    cout << "The Missing Element : " << s-sum;
    
    return 0;
}