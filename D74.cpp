// Delete an element in Array
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
    for (i = 0; i < arr.len; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int delet(struct array *arr, int index)
{
    int x = 0;
    if (index >= 0 && index < arr->len)
    {
        x = arr->A[index];
        for (int i = index; i < arr->len - 1; i++)
            arr->A[i] = arr->A[i + 1];
        arr->len--;
        return x;
    }
    return 0;
}

int main()
{
    struct array arr = {{2, 3, 4, 5, 6}, 5};
    printf("Elements :-\n");
    display(arr);
    printf("\nDeleted : %d",delet(&arr,3));
    printf("\nAfter Deletion :-\n");
    display(arr);
    return 0;
}