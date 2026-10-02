// Taylor series using loop
#include <iostream>
using namespace std;

double ex(int x, int n)
{
    double s = 1;
    int i;
    double num = 1, den = 1;

    for (i = 1; i <= n; i++)
    {
        num = num * x;
        den = den * i;
        s += num / den;
    }
    return s;
}
int main()
{
    double a = ex(2, 4);
    printf("%lf\n", a);
    return 0;
}