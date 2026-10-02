// C++ class
#include <iostream>
using namespace std;

class rect
{
private:
    int len;
    int bre;

public:
    rect() // default constructor
    {
        len = 0;
        bre = 0;
    }
    rect(int l, int b) // parameterised constructor
    {
        len = l;
        bre = b;
    }

    int area() { return len * bre; }
    int peri() { return 2 * (len + bre); }

    // mutator fxns.
    void setlen(int l) { len = l; }
    void setbre(int b) { bre = b; }

    // accessor fxns.
    int getlen(int l) { return len; }
    int getbre(int b) { return bre; }

    // Destructor
    ~rect()
    {
        cout << "Destroyed!";
    }
};
int main()
{
    rect r(10,5);
    cout << "Area : " << r.area() << endl;
    cout << "Perimeter : " << r.peri() << endl;
    return 0;
}