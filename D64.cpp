// Static array & Dynamic array
#include <iostream>
using namespace std;

int main()
{
    int A[5] = {2, 4, 6, 8, 10}; // Static array in STACK memory
    int *P;
    P = new int[5]; // Dynamic array in HEAP memory
    P[0] = 1;
    P[1] = 3;
    P[2] = 5;
    P[3] = 7;
    P[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    for (int j = 0; j < 5; j++)
    {
        cout << P[j] << " ";
    }
    
    delete []P;
    return 0;
}