// Improved Linear search in array
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

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int isearch(struct array *arr, int key)
{
    for (int i = 0; i < arr->len; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}
int main()
{
    struct array arr = {{2, 3, 4, 5, 6}, 5};
    display(arr);
    int x = 5;
    printf("\nSearch Complete for (%d) : Index = [%d]\n", x, isearch(&arr, x));
    display(arr);
    return 0;
}