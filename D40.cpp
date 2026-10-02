// Global variable in recursion
#include <iostream>
using namespace std;

int x = 0;
int fxn(int n)
{
    if (n > 0)
    {
        x++;
        return fxn(n - 1) + x;
    }
}

int main()
{
    int a;
    a = fxn(5);
    cout << a << endl;
    a = fxn(5);
    cout << a << endl;
    return 0;
}