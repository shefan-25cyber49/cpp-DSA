// Reversing Linked List by Sliding Pointers
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *head = nullptr;

void create(int A[], int n)
{
    struct Node *temp, *last;
    head = new Node;
    head->data = A[0];
    head->next = NULL;
    last = head;

    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

void rev2(Node *p)
{
    Node *q = nullptr, *r = nullptr;
    while (p)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    head = q;
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    display(head);
    rev2(head);
    cout << endl;
    display(head);
    return 0;
}