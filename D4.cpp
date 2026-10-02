#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size : ";
    cin >> n;
    int A[n]; // VARIABLE SIZED ARRAY : we can create it but cant initialise it here
    A[0] = 1;
    A[1] = 2;
    A[2] = 3;
    for (int x : A)
    {
        cout << x << endl;
    }
    return 0;
}