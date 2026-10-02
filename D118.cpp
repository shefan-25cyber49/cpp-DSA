// Comparing two strings
#include <iostream>
using namespace std;

int main()
{
    char A[] = "Painter";
    char B[] = "Painting";
    int i, j;
    for (i = 0, j = 0; A[i] != '\0' && A[j] != '\0'; i++, j++)
    {
        if (A[i] != B[j])
            break;
    }
    
    if (A[i] == B[j])
        cout << "Equal." << endl;
    else
        cout << "Different." << endl;

    return 0;
}