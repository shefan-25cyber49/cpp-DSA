// Rearrange the array such that -ve on left side and +ve on right side
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
    printf("\n");
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void Rearrange(struct array *arr)
{
    int i = 0, j = arr->len - 1;
    while (i < j)
    {
        while (arr->A[i] < 0)
            i++;
        while (arr->A[j] >= 0)
            j--;
        if (i < j)
            swap(&arr->A[i], &arr->A[j]);
    }
}

int main()
{
    struct array arr = {{2, -3, 25, 10, -15, -7}, 6};
    display(arr);
    Rearrange(&arr);
    display(arr);
    return 0;
}