// Sum of the nodes of LINKED LIST
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

int sum(struct node *p)
{
    int sum = 0;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    display(first);
    cout << endl
         << "Sum of Nodes : " << sum(first);
    return 0;
}