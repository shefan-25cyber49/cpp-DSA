// Taylor series by Horner's rule
#include <iostream>
using namespace std;

double ex(int x, int n)
{
    static double s = 1;
    if (n == 0)
    {
        return s;
    }
    else
    {
        s = 1 + x * s / n;
        return ex(x, n - 1);
    }
}
int main()
{
    double a = ex(2,4);
    printf("%lf\n", a);
    return 0;
}