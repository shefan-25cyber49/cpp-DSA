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
    cout << r.len << endl;
    cout << r.bre << endl;
    struct rect *p = &r;
    cout << p->len << endl;
    cout << p->bre << endl;

    return 0;
}