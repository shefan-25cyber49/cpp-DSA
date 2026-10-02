// Factorial using recursion
#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0)
        return 1;
    else
        return fac(n - 1) * n;
}
int main()
{
    int a = fac(5);
    cout << a << endl;
    return 0;
}