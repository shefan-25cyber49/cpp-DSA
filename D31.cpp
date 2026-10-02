// Structure & Functions - Program in C
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
int peri(struct rect r)
{
    return 2 * (r.len + r.bre);
}

int main()
{
    rect r = {0, 0};
    int l, b;
    cout << "Enter length and breadth : ";
    cin >> l >> b;
    initial(&r, l, b);
    int A = area(r);
    int P = peri(r);
    printf("Area = %d\nPerimeter = %d\n", A, P);

    return 0;
}