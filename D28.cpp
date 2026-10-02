// Class & constructor

#include <iostream>
using namespace std;

class rect // a C++ Class
{
private:
    int len;
    int bre;

public:
    rect(int l, int b) //constructor
    {
        len = l;
        bre = b;
    }
    int area()
    {
        return len * bre;
    }
    void changelength(int l)
    {
        len = l;
    }
};

int main()
{
    rect R(10,5); // object
    cout << R.area() << endl;
    R.changelength(20);
    cout << R.area() << endl;
    return 0;
}