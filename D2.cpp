#include <iostream>
using namespace std;
int main()
{

    int A[10] = {2, 4, 6, 8, 10, 1, 3};
    cout << sizeof(A) << endl;
    cout << A[1] << endl;
    printf("%d\n", A[2]);
    cout << A[8] << endl;
    printf("%d\n", A[9]);

    return 0;
}