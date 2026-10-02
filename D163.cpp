/// Creating a Linked List by just using INSERT functions
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

int main()
{
    insert(first, 0, 3);
    insert(first, 1, 5);
    insert(first, 2, 2);
    insert(first, 3, 6);
    insert(first, 4, 9);
    display(first);
    return 0;
}