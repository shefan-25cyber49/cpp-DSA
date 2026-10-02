// C++ Class for PRODUCT & DIVISION of Complex numbers using Operation-Overloading
#include <iostream>
using namespace std;

class complex
{
public:
    int real;
    int imag;

    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    complex operator*(complex &c);
    complex operator/(complex &c);
    friend istream &operator>>(istream &is, complex &c);       // extraction
    friend ostream &operator<<(ostream &os, const complex &c); // insertion
};

complex complex::operator*(complex &c)
{
    complex pro;
    pro.real = (real * c.real) - (imag * c.imag);
    pro.imag = (real * c.imag) + (c.real * imag);
    return pro;
}
complex complex::operator/(complex &c)
{
    complex dvs;
    dvs.real = (real * c.real + imag * c.imag) / (c.real * c.real + c.imag * c.imag);
    dvs.imag = (imag * c.real - real * c.imag) / (c.real * c.real + c.imag * c.imag);
    return dvs;
}

istream &operator>>(istream &is, complex &c)
{
    cout << endl
         << "Enter the Real & Imaginary values : ";
    is >> c.real >> c.imag;
    return is;
}
ostream &operator<<(ostream &os, const complex &c)
{
    os << c.real << " + i(" << c.imag << ")";
    return os;
}

int main()
{
    complex C1, C2, pro, divs;
    cin >> C1;
    cout << C1;
    cin >> C2;
    cout << C2;
    divs = C1 / C2;
    pro = C1 * C2;
    cout << endl
         << "Product = " << pro << endl
         << "Division = " << divs;
    return 0;
}