// Recursion - Tail
#include <iostream>
using namespace std;

void fxn(int n) // 4 fxn calls
{
    if (n > 0)
    {
        cout << n << endl;
        fxn(n - 1);
    }
}

int main()
{
    int x = 3;
    fxn(x);
    return 0;
}