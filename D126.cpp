// Check if Anagram - Two sets of words with same set of alphabets
#include <iostream>
using namespace std;

int main()
{
    char A[] = "observe";
    char B[] = "verbose";
    int H[26] = {0};
    int i;
    for (i = 0; i < A[i] != '\0'; i++)
    {
        H[A[i] - 97]++;
    }
    for (i = 0; i < B[i] != '\0'; i++)
    {
        H[B[i] - 97]--;
        if (H[B[i] - 97] < 0)
        {
            cout << "Not Anagrams." << endl;
            break;
        }
    }
    if (B[i] == '\0')
    {
        cout << "Anagrams." << endl;
    }

    return 0;
}