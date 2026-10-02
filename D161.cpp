/// Improved Linear Search by Move to Head method
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

Node *Search(Node *p, int key)
{
    Node *q = nullptr;
    while (p)
    {
        if (key == p->data)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return nullptr;
}

int main()
{
    struct Node *Key;
    int A[] = {3, -5, 7, 12, 15};
    create(A, 5);
    display(first);
    Key = Search(first, 12);
    if (Key)
        cout << "Key is found : " << Key->data << endl;
    else
        cout << "Key is NOT found." << endl;
    display(first);

    return 0;
}