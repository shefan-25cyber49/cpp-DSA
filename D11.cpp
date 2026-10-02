#include <iostream>
using namespace std;

int main()
{

    int *p;
    p = new int[3];
    p[0] = 0;
    p[1] = 1;
    p[2] = 2;
    for (int i = 0; i < 3; i++)
    {
        cout << p[i] << endl;
    }
    delete[] p; // or free(p);
    return 0;
}