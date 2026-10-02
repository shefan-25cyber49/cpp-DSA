// MAX & MIN element LINKED LIST
#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
} *first = NULL;

void create(int A[], int n)
{
    struct node *temp, *last;
    first = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        temp = new node;
        temp->data = A[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}

void display(struct node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int max(struct node *p)
{
    int mx;
    mx = INT32_MIN;

    while (p)
    {
        if (p->data > mx)
            mx = p->data;
        p = p->next;
    }
    return mx;
}

int min(struct node *p)
{
    int mn;
    mn = INT32_MAX;

    while (p)
    {
        if (p->data < mn)
            mn = p->data;
        p = p->next;
    }
    return mn;
}

int main()
{
    int A[] = {3, 5, 7, 100, 15};
    create(A, 5);
    display(first);
    cout << endl
         << "Max Element : " << max(first) << endl
         << "Min Element : " << min(first) << endl;
    return 0;
}