// Combination nCr using loop
#include <iostream>
using namespace std;

int fact(int a)
{
    int f=1;
    if (a <= 1)
    {
        return 1;
    }
    else{
        for (int i = 2; i <= a; i++)
        {
            f *= i;
        }
        return f;
    }
}

int c(int n, int r)
{
    int x, y, z;
    x = fact(n);
    y = fact(r);
    z = fact(n - r);
    return x / (y * z);
}

int main()
{
    cout << c(4,2) << endl;

    return 0;
}