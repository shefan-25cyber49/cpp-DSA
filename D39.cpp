// Static variable in recursion
#include <iostream>
using namespace std;

int fxn(int n)
{
    static int x = 0;
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
    return 0;
}