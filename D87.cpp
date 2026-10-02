// Reverse an array by inter-changing
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
    int i, j, temp;
    for (i = 0, j = arr->len - 1; i < j; i++, j--)
    {
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

int main()
{
    struct array arr = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, 10};
    display(arr);
    rev(&arr);
    display(arr);
    return 0;
}