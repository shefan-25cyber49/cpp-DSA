/// Inserting Nodes at last in a Linked List
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = nullptr;

void display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void insertLast(Node *p, int x)
{
    Node *last, *t;
    t = new Node;
    t->data = x;
    t->next = nullptr;
    if (first == nullptr)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}

int main()
{
    insertLast(first, 10);
    display(first);
    insertLast(first, 20);
    display(first);
    insertLast(first, 30);
    display(first);
    return 0;
}