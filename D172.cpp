// Reversing Elements of a Linked List
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

int count(Node *p)
{
    int c = 0;
    while (p)
    {
        c++;
        p = p->next;
    }
    return c;
}

void rev1(Node *p)
{
    int i = 0;
    int *A = new int[count(p)];
    Node *q = p;
    while (q)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

int main()
{
    int A[] = {3, 5, 7, 10, 15};
    create(A, 5);
    display(head);
    rev1(head);
    cout << endl;
    display(head);
    return 0;
}