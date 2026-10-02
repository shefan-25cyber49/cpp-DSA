// C++ Class for ADDING & SUBTRACTING Complex numbers using Operation-Overloading
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
    complex operator+(complex &c);
    complex operator-(complex &c);
    friend istream &operator>>(istream &is, complex &c);       // extraction
    friend ostream &operator<<(ostream &os, const complex &c); // insertion
};

complex complex::operator+(complex &c)
{
    complex sum;
    sum.real = real + c.real;
    sum.imag = imag + c.imag;
    return sum;
}
complex complex::operator-(complex &c)
{
    complex sub;
    sub.real = real - c.real;
    sub.imag = imag - c.imag;
    return sub;
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
    complex C1, C2, sum, sub;
    cin >> C1;
    cout << C1;
    cin >> C2;
    cout << C2;
    sum = C1 + C2;
    sub = C1 - C2;
    cout << endl
         << "Addition = " << sum << endl
         << "Subtraction = " << sub;
    return 0;
}