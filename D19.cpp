// Parameters - pass by address
#include <iostream>
using namespace std;
void swap(int *x, int *y) // formal parameters will be pointers
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a=10,b=20;
    swap(&a,&b); // address pass
    cout << a << endl << b; // actual parameters did change

    return 0;
}