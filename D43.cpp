// Nested Recursion
#include <iostream>
using namespace std;

int fxn(int n)
{
    if (n > 100)
        return n - 10;
    else
        return fxn(fxn(n + 11));
}

int main()
{
    int a=95;
    cout << fxn(a) << endl;

    return 0;
}