// Quiz Q.4
#include <iostream>
using namespace std;

int f(int n)
{
    int x = 1;
    if (n == 1)
        return x;
    for (int i = 1; i < n; ++i)
    {
        x += f(i) * f(n - i);
    }
    return x;
}
int main()
{
    cout << f(5) << endl;

    return 0;
}