// Finding duplicate in a string
#include <iostream>
using namespace std;

int main()
{
    char S[] = "saifan";
    char dupe = '\0';

    for (int i = 0; S[i] != '\0'; ++i)
    {
        for (int j = i + 1; S[j] != '\0'; ++j)
        {
            if (S[i] == S[j])
            {
                dupe = S[i];
                break;
            }
        }

        if (dupe != '\0')
        {
            break;
        }
    }

    if (dupe != '\0')
    {
        cout << "Duplicate : " << dupe << endl;
    }
    else
    {
        cout << "No duplicate found" << endl;
    }

    return 0;
}