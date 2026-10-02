// Array as parameters
#include <iostream>
using namespace std;
void fxn(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        A[i]++;
    }
}
int main()
{ 
    int a[3] = {2, 4, 6};
    fxn(a, 3);
    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << endl;
    }

    return 0;
}