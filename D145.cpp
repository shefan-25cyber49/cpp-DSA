// Polynomial Evaluation with using functions
#include <iostream>
#include <math.h>
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

void create(struct poly *p)
{
    cout << "Enter no. of Terms : ";
    cin >> p->num;
    p->T = new term[p->num];
    cout << "Enter the Terms(Cofficient & Exponent) :-" << endl;
    for (int i = 0; i < p->num; i++)
    {
        cout << "Term no. " << i + 1 << " : ";
        cin >> p->T[i].cof >> p->T[i].exp;
    }
}
void display(struct poly p)
{
    cout << endl
         << "Polynomial :-" << endl;

    for (int i = 0; i < p.num; i++)
    {
        if (p.T[i].exp > 1)
            cout << "Term no. " << i + 1 << " = " << p.T[i].cof << "x^" << p.T[i].exp << endl;
        else if (p.T[i].exp == 1)
            cout << "Term no. " << i + 1 << " = " << p.T[i].cof << "x" << endl;
        else
            cout << "Term no. " << i + 1 << " = " << p.T[i].cof << endl;
    }
}
int eval(struct poly p)
{
    int x, sum = 0;
    cout << endl
         << "Enter the value of x : ";
    cin >> x;

    for (int i = 0; i < p.num; i++)
    {
        sum += p.T[i].cof * pow(x, p.T[i].exp);
    }
    return sum;
}

int main()
{
    struct poly P;
    create(&P);
    display(P);
    cout << "=> Value of Polynomial = " << eval(P) << endl;

    return 0;
}