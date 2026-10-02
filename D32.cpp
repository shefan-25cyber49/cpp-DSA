// OOP - Object Oriented Program in C++
#include <iostream>
using namespace std;

class rect
{
    public:
    int len;
    int bre;

    void initial(int l, int b)
    {
        len = l;
        bre = b;
    }
    int area()
    {
        return len * bre;
    }
    int peri()
    {
        return 2 * (len + bre);
    }
};

int main()
{
    rect R;
    int l, b;
    cout << "Enter length and breadth : ";
    cin >> l >> b;
    R.initial(l, b);
    int A = R.area();
    int P = R.peri();
    printf("Area = %d\nPerimeter = %d\n", A, P);

    return 0;
}