// Fibonacci Series using loops
#include <iostream>
using namespace std;

int fib(int n)
{
    int a = 0, b = 1, c = 0;
    if (n <= 1)
    {
        return n;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
        }
        return c;
    }
}
int main()
{
    cout << fib(6) << endl;

    return 0;
}