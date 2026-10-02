#include <iostream>
using namespace std;

struct rect
{
    int len;
    int bre;
};

void fxn(struct rect r)
{
    cout << "Length : " << r.len << endl;
    cout << "Breadth : " << r.bre << endl;
}

int main()
{
    struct rect R = {10, 5};
    fxn(R);
    cout << "Length : " << R.len << endl;
    cout << "Breadth : " << R.bre << endl;
    return 0;
}