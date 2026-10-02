// Reverse an array using an aux. array
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

void rev(struct array *arr)
{
    int *B;
    B = (int *)new int[arr->len];
    int i, j;
    for (i = arr->len - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (i = 0; i < arr->len; i++)
        arr->A[i] = B[i];
}

int main()
{
    struct array arr = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, 10};
    display(arr);
    rev(&arr);
    display(arr);
    return 0;
}