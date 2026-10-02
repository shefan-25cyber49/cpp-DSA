// Permutations of String
#include <iostream>
using namespace std;

void perm(char S[], int k)
{
    static int A[10] = {0};
    static char R[10];
    int i;

    if (S[k] == '\0')
    {
        R[k] = '\0';
        for (i = 0; R[i] != '\0'; i++)
        {
            cout << R[i];
        }
        cout << endl;
        return;
    }

    for (i = 0; S[i] != '\0'; i++)
    {
        if (A[i] == 0)
        {
            R[k] = S[i];
            A[i] = 1;
            perm(S, k + 1);
            A[i] = 0;
        }
    }
}

int main()
{
    char S[] = "SAIF"; // n! = 4! = 24
    perm(S, 0);

    return 0;
}