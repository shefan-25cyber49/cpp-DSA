// Count the nodes of LINKED LIST by Recursion
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

int count(struct node *p)
{
    if (p == 0)
        return 0;
    else
        return count(p->next) + 1;
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    display(first);
    cout << endl << "No. of Nodes : " << count(first);
    return 0;
}