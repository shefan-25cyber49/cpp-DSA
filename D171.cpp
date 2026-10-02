// Removing Duplicate from SORTED Linked list
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

void dupe(Node *p)
{
    Node *q = p->next;
    while (q)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}

int main()
{
    int A[] = {3, 5, 5, 5, 10, 10, 10, 10, 15};
    create(A, 9);
    display(head);
    dupe(head);
    cout << endl;
    display(head);
    return 0;
}