// MAX & MIN element LINKED LIST by Recursion
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void create(int A[], int n)
{
    struct node *temp, *last;
    first = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = new node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int max(struct node *p)
{
    int x = 0;
    if (p == 0)
        return INT32_MIN;
    x = max(p->next);

    if (x > p->data)
        return x;
    else
        return p->data;
}

int min(struct node *p)
{
    int x = 0;
    if (p == 0)
        return INT32_MAX;
    x = min(p->next);

    if (x < p->data)
        return x;
    else
        return p->data;
}

int main()
{
    int A[] = {3, -5, 7, 50, 15};
    create(A, 5);
    display(first);
    cout << endl
         << "Max Element : " << max(first) << endl
         << "Min Element : " << min(first) << endl;

    return 0;
}