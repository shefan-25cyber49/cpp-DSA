// LINEAR SEARCH an element in LINKED LIST by recursion
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

void display(struct Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

Node *RSearch(Node *p, int key)
{
    if (p == nullptr)
        return nullptr;
    if (key == p->data)
        return p;
    return RSearch(p->next, key);
}

int main()
{
    struct Node *Key;
    int A[] = {3, -5, 7, 50, 15};
    create(A, 5);

    Key = RSearch(first, 50);
    if (Key)
        cout << "Key is found : " << Key->data << endl;
    else
        cout << "Key is NOT found." << endl;
    return 0;
}