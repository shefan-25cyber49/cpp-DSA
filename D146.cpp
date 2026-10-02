// Polynomial Addition
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
    for (int i = 0; i < p.num; i++)
    {
        cout << p.T[i].cof << "x^" << p.T[i].exp << " + ";
    }
    cout << endl
         << endl;
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

struct poly *add(struct poly *p1, struct poly *p2)
{
    struct poly *sum;
    int size = p1->num + p2->num;
    sum = new struct poly;
    sum->T = new struct term[size];
    int i, j, k;
    i = j = k = 0;
    while (i < p1->num && j < p2->num)
    {
        if (p1->T[i].exp > p2->T[j].exp)
        {
            sum->T[k++] = p1->T[i++];
        }
        else if (p1->T[i].exp < p2->T[j].exp)
        {
            sum->T[k++] = p2->T[j++];
        }
        else
        {
            sum->T[k].exp = p1->T[i].exp;
            sum->T[k++].cof = p1->T[i++].cof + p2->T[j++].cof;
        }
    }
    for (; i < p1->num; i++)
        sum->T[k++] = p1->T[i];
    for (; j < p2->num; j++)
        sum->T[k++] = p2->T[j];
    sum->num = k;
    return sum;
}

int main()
{
    struct poly P1, P2;
    struct poly *P3;

    create(&P1);
    create(&P2);
    P3 = add(&P1, &P2);

    cout << "Polynomial P :-" << endl;
    display(P1);
    cout << "Polynomial Q :-" << endl;
    display(P2);

    cout << "Polynomial P+Q :-" << endl;
    display(*P3);

    return 0;
}