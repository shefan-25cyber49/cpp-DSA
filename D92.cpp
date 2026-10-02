// Sort an array 
#include <iostream>
using namespace std;

struct array
{
    int A[10];
    int len;
};

void display(struct array arr)
{
    int i;
    printf("\nElements :-\n");
    for (i = 0; i < arr.len; i++)
        printf("%d ", arr.A[i]);
    printf("\n");
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sort(struct array *arr)
{
    for (int i = 0; i < arr->len - 1; i++)
    {
        for (int j = 0; j < arr->len - 1 - i; j++)
        {
            if (arr->A[j] > arr->A[j + 1])
                swap(&arr->A[j], &arr->A[j + 1]);
        }
    }
}

int main()
{
    struct array arr = {{9, 2, 7, 6, 5}, 5};

    display(arr);
    sort(&arr);
    display(arr);

    return 0;
}