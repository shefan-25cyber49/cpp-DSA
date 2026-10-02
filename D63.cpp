// Quiz Q.5
#include <iostream>
using namespace std;

void f(int n)
{
    static int d = 1;
    cout << n << " ";
    cout << d << " ";
    d++;
    if (n > 1)
        f(n - 1);
    cout << d << " ";
}
int main()
{
    f(3);
    return 0;
}