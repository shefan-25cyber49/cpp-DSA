#include <iostream>
using namespace std;

struct rect
{
    int len;
    int bre;
};

struct rect *fxn(){
    struct rect *p;
    p = new rect;
    p->len = 15;
    p->bre = 7;
    return p;
}

int main() {
    struct rect *r = fxn();
    cout << "length : " << r->len << endl << "breadth : " << r->bre ;

    return 0;
}