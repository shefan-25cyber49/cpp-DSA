// Finding Duplicate in a string using Hash-Table
#include <iostream>
using namespace std;

int main()
{
    char S[] = "saifan";
    int H[26] = {0};
    int i;
    for (i = 0; S[i] != '\0'; i++)
    {
        H[S[i] - 97]++;
    }
    for (i = 0; i < 26; i++)
    {
       if (H[i] > 1)
       {
        printf("Dupliacte : %c = %d\n",i+97,H[i]);
       }
    }

    return 0;
}