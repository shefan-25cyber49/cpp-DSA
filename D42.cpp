// Indirect Recursion
#include <iostream>
using namespace std;

void fxnA(int);
void fxnB(int);

void fxnA(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        fxnB(n - 1);
    }
}
void fxnB(int n)
{
    if (n > 1)
    {
        cout << n << endl;
        fxnA(n/2);
    }
}
int main()
{
    int a = 20;
    fxnA(a);
    return 0;
}