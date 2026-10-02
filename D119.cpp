// Cheking a string is Palindrome using other string
#include <iostream>
using namespace std;

int main()
{
    char A[10] = "madam";
    char B[10];
    int i, j;
    // Reverse
    for (i = 0; A[i] != '\0'; i++)
        ;
    i--;
    for (j = 0; i >= 0; i--, j++)
    {
        B[j] = A[i];
    }
    B[j] = '\0';
    // Compare
    for (i = 0, j = 0; A[i] != '\0' && A[j] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
            break;
    }

    cout << A << endl;
    cout << B << endl;

    if (A[i] == B[j])
        cout << "Palindrome." << endl;
    else
        cout << "Not a Palindrome." << endl;

    return 0;
}