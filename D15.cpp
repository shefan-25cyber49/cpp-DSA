// Pointer to structure
#include <iostream>
using namespace std;
struct rect
{
    int len;
    int bre;
};

int main()
{
    struct rect r = {10, 5};
    struct rect *p = &r;
    p->len = 20; // or (*p).len = 20;
    cout << p->len << endl;
    return 0;
}