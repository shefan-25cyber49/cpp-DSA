// Recursion - Head
#include <iostream>
using namespace std;

void fxn(int n) // 4 fxn calls
{
    if (n > 0)
    {
        fxn(n - 1);
        cout << n << endl;
    }
}

int main()
{
    int x = 3;
    fxn(x);
    return 0;
}