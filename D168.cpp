// Create & Display a Polynomial by LINKED LIST
#include <iostream>
using namespace std;

struct Term
{
    int cof;
    int exp;
    struct Term *next;
};
struct Term *first = NULL;

void create(int C[], int E[], int n)
{
    struct Term *temp, *last;
    first = new Term;
    first->cof = C[0];
    first->exp = E[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = new Term;
        temp->cof = C[i];
        temp->exp = E[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct Term *p)
{
    while (p)
    {
        cout << p->cof << "x^" << p->exp << " + ";
        p = p->next;
    }
}

int main()
{
    int Coff[] = {3, 5, 7};
    int Expo[] = {2, 1, 0};
    create(Coff, Expo, 3);
    display(first);
    return 0;
}