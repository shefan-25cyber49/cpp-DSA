// Reversing a string using Swapping
#include <iostream>
using namespace std;

int main()
{
    char S[10] = "saifan";
    cout << S << endl;
    int i, j, t;
    for (j = 0; S[j] != '\0'; j++)
        ;
    j--;
    for (i = 0; i < j; i++, j--)
    {
        t = S[i];
        S[i] = S[j];
        S[j] = t;
    }
    cout << S << endl;
    return 0;
}