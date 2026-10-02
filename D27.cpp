// functions & structures
#include <iostream>
using namespace std;

struct rect
{
    int len;
    int bre;
};
void initial(struct rect *r, int l, int b)
{
    r->len = l;
    r->bre = b;
}
int area(struct rect r)
{
    return r.len * r.bre;
}
void changelength(struct rect *r, int l)
{
    r->len = l;
}

int main()
{
    struct rect R;
    initial(&R, 10, 5);
    int A = area(R);
    cout << A << endl;
    changelength(&R, 20);
    int B = area(R);
    cout << B << endl;
    return 0;
}