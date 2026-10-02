// Increasing array size
#include <iostream>
using namespace std;

int main()
{

    int *P = new int[5];
    int *Q = new int[10];
    P[0] = 1;
    P[1] = 3;
    P[2] = 5;
    P[3] = 7;
    P[4] = 9;

    printf("Array P : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", P[i]);
        Q[i] = P[i];
    }

    delete[] P;
    
    Q[5] = 11;
    Q[6] = 13;
    Q[7] = 15;
    Q[8] = 17;
    Q[9] = 19;
    printf("\nNEW Array Q : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", Q[i]);
    }
    return 0;
}