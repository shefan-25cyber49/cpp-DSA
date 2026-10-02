// Modular program - many parts
#include <iostream>
using namespace std;

int area(int l,int b){
    return l*b;
}
int peri(int l,int b){
    return 2*(l+b);
}

int main() {
    int len=0,bre=0;
    cout << "Enter length and breadth : ";
    cin >> len >> bre;

    int A = area(len,bre);
    int P = peri(len,bre);
    printf("Area = %d\nPerimeter = %d\n",A,P);

    return 0;
}