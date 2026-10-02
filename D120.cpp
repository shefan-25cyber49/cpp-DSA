// // Cheking a string is Palindrome using Swapping
#include <iostream>
using namespace std;

int main()
{
    char S[10] = "madam";
    cout << S << endl;
    int i, j;
    for (j = 0; S[j] != '\0'; j++)
        ;
    j--;
    for (i = 0; i < j; i++, j--)
    {
        if (S[i] != S[j])
        {
            break;
        }
    }
    if (S[i] == S[j])
        cout << "Palindrome." << endl;
    else
        cout << "Not a Palindrome." << endl;
    return 0;
}