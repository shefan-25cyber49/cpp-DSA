#include <iostream>
using namespace std;

struct rect
{
    int len;
    int bre;
};

void fxn(struct rect *p)
{
    p->len++; p->bre++;
    cout << "Length : " << p->len << endl;
    cout << "Breadth : " << p->bre << endl;
}

int main()
{
    struct rect R = {10,5};
    fxn(&R); // call by address passing a structure's address
    cout << "Length : " << R.len << endl;
    cout << "Breadth : " << R.bre << endl;
    return 0;
}