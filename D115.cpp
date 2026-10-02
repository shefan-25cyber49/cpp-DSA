// Validating a String/username
#include <iostream>
using namespace std;

int valid(char *user)
{
    for (int i = 0; user[i] != '\0'; i++)
    {
        if (!(user[i] >= 65 && user[i] <= 90) &&
            !(user[i] >= 97 && user[i] <= 122) &&
            !(user[i] >= 48 && user[i] <= 57) && user[i] != 95)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char *user = "Saif_123";
    system("cls");

    if (valid(user))
        cout << "Valid.";
    else
        cout << "InValid.";

    return 0;
}