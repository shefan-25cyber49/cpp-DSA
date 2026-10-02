// Array as parameter
#include <iostream>
using namespace std;
void fxn(int A[], int n){
    A[0] = 25;
}
int main() {
    int a[3] = {2,4,6};
    cout << a[0] << endl;
    fxn(a,3);
    cout << a[0] << endl;
    return 0;
}