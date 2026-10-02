// Exponents using recursion (faster)
#include <iostream>
using namespace std;

int pwr(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return pwr(m * m, n / 2);
    else
        return m * pwr(m * m, (n - 1) / 2);
}
int main()
{
    int a = 2, b = 9;
    cout << pwr(a, b) << endl;
    return 0;
}