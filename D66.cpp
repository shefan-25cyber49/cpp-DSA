// Increasing size of array 
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

    free(P);
    P = Q;
    Q = NULL;

    P[5] = 11;
    P[6] = 13;
    P[7] = 15;
    P[8] = 17;
    P[9] = 19;
    printf("\nReSized Array : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", P[i]);
    }
    return 0;
}