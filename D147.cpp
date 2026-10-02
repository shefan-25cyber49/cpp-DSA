// C++ Class for Complex numbers using insertion & extraction
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
    friend istream &operator>>(istream &is, complex &c); // extraction
    friend ostream &operator<<(ostream &os, const complex &c); // insertion
};

istream &operator>>(istream &is, complex &c)
{
    cout << "Enter the Real & Imaginary values : ";
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
    complex C;
    cin >> C;
    cout << C;
    return 0;
}