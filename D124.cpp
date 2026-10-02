// Finding Duplicate in a string using Bit-wise
#include <iostream>
using namespace std;

int main()
{
    char S[] = "saifan";
    long int H = 0, x = 0;
    for (int i = 0; S[i] != '\0'; i++)
    {
        x = 1;
        x = x << (S[i] - 97);
        if ((x & H) > 0) // Masking
            printf("%c is Duplicate.\n", S[i]);
        else
            H = (x | H); // Merging
    }
    return 0;
}