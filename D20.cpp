// Parameters - pass by reference
#include <iostream>
using namespace std;
void swap(int &x, int &y) // formal parameters
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a=10,b=20;
    swap(a,b);
    cout << a << endl << b; // actual parameters did change

    return 0;
}