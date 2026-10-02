// Append/add an element in Array
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
        printf("%d ", arr.A[i]);
}

void append(struct array *arr, int x)
{
    if (arr->len < 100)
        arr->A[arr->len++] = x;
}

int main()
{
    struct array arr = {{2, 3, 4, 5, 6}, 5};
    printf("Elements :-\n");
    display(arr);
    append(&arr, 9);
    printf("\nAfter Append :-\n");
    display(arr);
    return 0;
}