// Reversing a string using other string
#include <iostream>
using namespace std;

int main()
{
    char S[10] = "saifan";
    char A[10];
    int i, j;
    for (i = 0; S[i] != '\0'; i++)
        ;
    i--;
    for (j = 0; i >= 0; i--, j++)
    {
        A[j] = S[i];
    }
    A[j] = '\0';
    cout << S << endl;
    cout << A << endl;

    return 0;
}