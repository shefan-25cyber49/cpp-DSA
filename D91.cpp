// Merging two sorted arrays
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

struct array *merge(struct array *arr1, struct array *arr2)
{
    int i = 0, j = 0, k = 0;
    struct array *arr3 = new struct array;

    while (i < arr1->len && j < arr2->len)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }
    for (; i < arr1->len; i++)
    {
        arr3->A[k++] = arr1->A[i];
    }
    for (; j < arr2->len; j++)
    {
        arr3->A[k++] = arr2->A[j];
    }
    arr3->len = arr1->len + arr2->len;
}

int main()
{
    struct array arr1 = {{2, 6, 10, 15, 25}, 5};
    struct array arr2 = {{3, 4, 7, 18, 20}, 5};
    struct array *arr3;
    arr3 = merge(&arr1, &arr2);

    display(arr1);
    display(arr2);
    display(*arr3);

    return 0;
}