// Create & Display LINKED LIST
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next; // Self-referential Structure
};
struct Node *first = NULL;

void create(int A[], int n)
{
    struct Node *temp, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct Node *p)
{
    while (p)
    {
        cout << p->data << " " << &p->data << endl;
        p = p->next;
    }
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    display(first);
    return 0;
}