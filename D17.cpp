// functions
#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c = a + b;
    return c;
}
int main()
{
    int x = 2, y = 3;
    int sum = add(x, y);
    cout << "Sum is : " << sum;
    return 0;
}