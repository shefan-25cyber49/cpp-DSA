// Taylor series of e^x
#include <iostream>
using namespace std;
double ex(int x, int n)
{
    static double p = 1, f = 1;
    double r;
    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = ex(x, n - 1);
        p = p * x;
        f = f * n;
        return r + p / f;
    }
}
int main()
{
    double a = ex(2,4);
    printf("%lf\n", a);
    return 0;
}