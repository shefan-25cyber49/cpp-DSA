// Combination using Recursive nCr (Pascal triangle)
#include <iostream>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return fact(n - 1) * n;
}

int ncr(int n, int r)
{
    if (n == r || r == 0)
    {
        return 1;
    }
    else
        return ncr(n - 1, r - 1) + ncr(n - 1, r);
}

int main()
{
    cout << ncr(10, 2) << endl;

    return 0;
}