// Insert an element in Array
#include <iostream>
using namespace std;

struct array
{
    int A[100];
    int len;
};

void display(struct array arr)
{
    for (int i = 0; i < arr.len; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

void insert(struct array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->len)
    {
        for (int i = arr->len; i > index; i--)
            arr->A[i] = arr->A[i - 1];
            
        arr->A[index] = x;
        arr->len++;
    }
}

int main()
{
    struct array arr = {{2, 3, 4, 5, 6}, 5};
    printf("Elements :-\n");
    display(arr);
    insert(&arr, 5, 9);
    printf("\nAfter Insert :-\n");
    display(arr);
    return 0;
}