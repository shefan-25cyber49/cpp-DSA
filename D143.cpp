// Polynomial Representation
#include <iostream>
using namespace std;

struct term
{
    int cof;
    int exp;
};
struct poly
{
    int num;
    struct term *T;
};

int main()
{
    struct poly P;
    cout << "Enter no. of Terms : ";
    cin >> P.num;

    P.T = new term[P.num];
    cout << "Enter the Terms(Cofficient & Exponent) :-" << endl;
    for (int i = 0; i < P.num; i++)
    {
        cout << "Term no. " << i + 1 << " : ";
        cin >> P.T[i].cof >> P.T[i].exp;
    }

    cout << endl
         << "Polynomial :-" << endl;

    for (int i = 0; i < P.num; i++)
    {
        if (P.T[i].exp > 1)
            cout << "Term no. " << i + 1 << " = " << P.T[i].cof << "x^" << P.T[i].exp << endl;
        else if (P.T[i].exp == 1)
            cout << "Term no. " << i + 1 << " = " << P.T[i].cof << "x" << endl;
        else
            cout << "Term no. " << i + 1 << " = " << P.T[i].cof << endl;
    }

    return 0;
}