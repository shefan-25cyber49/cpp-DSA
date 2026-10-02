#include <iostream>
using namespace std;

struct rect
{
    int length;
    int breadth;
};

int main()
{
    struct rect r = {10, 5};
    cout << r.length << endl;
    cout << r.breadth << endl;
    printf("AREA = %d\n", r.length * r.breadth);
    return 0;
}