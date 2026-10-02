// Tree Recursion
#include <iostream>
using namespace std;

void fxn(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        fxn(n-1);
        fxn(n-1);
    }
}
int main()
{
    int a = 3;
    fxn(3);
    return 0;
}