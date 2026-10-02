// Set or replace - write an element at a index in Array
#include <iostream>
using namespace std;

struct array
{
    int A[100];
    int len;
};

void display(struct array arr)
{
    int i;
    printf("\nElements :-\n");
    for (i = 0; i < arr.len; i++)
        printf("%d ", arr.A[i]);
}

void set(struct array *arr, int index, int x)
{
    if (index >= 0 && index < arr->len)
    {
        arr->A[index] = x;
    }
}

int main()
{
    struct array arr = {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, 10};
    display(arr);
    int a = 11, i = 5;
    set(&arr, i, a);
    printf("\n\nSet the Element at index [%d] to %d\n", i, arr.A[i]);
    display(arr);
    return 0;
}