// Count words in a STRING
#include <iostream>
using namespace std;

int main()
{
    char S[] = "How are you";
    int word = 1;
    for (int i = 0; S[i] != '\0'; i++)
    {
        if (S[i] == ' ' && S[i - 1] != ' ')
        {
            word++;
        }
    }
    cout << S << endl;
    cout << "words : " << word << endl;
    return 0;
}