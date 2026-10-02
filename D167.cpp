// Single Linked List - Menu Driven Program
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
    int ch, n, x, i;
    cout << "Enter the Number of Nodes to Create :";
    cin >> n;
    int A[n];
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    create(A, 5);
    cout << "MENU :-" << endl
         << " (1) Display (2) Insert (3) Search (4) Delete" << endl;

    do
    {
        cout << endl
             << "Enter your Choice :";
        cin >> ch;

        switch (ch)
        {
        case 1:
            display(first);
            break;
        case 2:
            cout << "Enter the Index to Insert :";
            cin >> i;
            cout << "Enter the Element to Insert :";
            cin >> x;
            insert(first, i, x);
            display(first);
            break;
        case 3:
            struct Node *Key;
            cout << "Enter the Element to Search :";
            cin >> x;
            Key = Search(first, x);
            if (Key)
                cout << "Key is found : " << Key->data << endl;
            else
                cout << "Key is NOT found." << endl;
            break;
        case 4:
            cout << "Enter the Index to Delete element :";
            cin >> i;
            cout << "Element Deleted : " << Delete(first, i) << endl;
            display(first);
            break;
        default:
            cout << "Invalid Choice.";
            break;
        }
    } while (ch > 0 && ch < 5);

    return 0;
}