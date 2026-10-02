// Complex number = a + ib
#include <iostream>
using namespace std;
struct comp
{
    float real;
    float imag;
};

int main()
{
    struct comp c;
    cout << "Enter Real part : ";
    cin >> c.real;
    cout << "Enter Imaginary part : ";
    cin >> c.imag;
    printf("Complex number = %g + (%g)i\n", c.real, c.imag);
    return 0;
}