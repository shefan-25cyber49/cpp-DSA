#include <iostream>
using namespace std;
struct rect
{
    int l;
    int b;
};

int main()
{
    int *p1;
    float *p2;
    char *p3;
    double *p4;
    struct rect *p5;

    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;

    return 0;
}