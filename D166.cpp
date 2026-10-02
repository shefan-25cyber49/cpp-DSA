// Deleting elements in a Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = nullptr;

void create(int A[], int n)
{
    struct Node *temp, *last;
    first = new Node;
    first->data = A[0];
    first->next = nullptr;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = new Node;
        temp->data = A[i];
        temp->next = nullptr;
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
    cout << endl;
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

void insert(Node *p, int index, int x)
{
    if (index < 0 || index > count(p))
        return;
    Node *t = new Node;
    t->data = x;
    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

Node *Search(Node *p, int key)
{
    while (p)
    {
        if (key == p->data)
            return p;
        p = p->next;
    }
    return nullptr;
}

int Delete(Node *p, int index)
{
    Node *q;
    int x, i;
    if (index < 1 && index > count(p))
    {
        return -1;
    }
    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        delete q;
        return x;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
        return x;
    }
}

int main()
{

    int A[] = {3, 5, 7, 12, 15, 17, 20};
    create(A, 5);
    display(first);
    cout << "Element Deleted : " << Delete(first, 1) << endl; // Deleting First element
    display(first);
    cout << "Element Deleted : " << Delete(first, 3) << endl; // Deleting any element
    display(first);
    return 0;
}