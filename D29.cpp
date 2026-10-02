// MonoLithic styled program -
// all code in one big part, not split into smaller parts.
#include <iostream>
using namespace std;

int main() {
    int len=0,bre=0;
    cout << "Enter length and breadth : ";
    cin >> len >> bre;

    int area = len*bre;
    int peri = 2*(len+bre);
    printf("Area = %d\nPerimeter = %d\n",area,peri);

    return 0;
}