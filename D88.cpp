// Insert an element in a sorted array
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

void InsertSort(struct array *arr, int x)
{
    if (arr->len == 100)
        return;
    int i = arr->len - 1;
    while (i >= 0 && arr->A[i] > x)
    {
        arr->A[i + 1] = arr->A[i];
        i--;
    }
    arr->A[i + 1] = x;
    arr->len++;
}

int main()
{
    struct array arr = {{2, 3, 5, 7, 8, 9, 12, 15, 17, 18}, 10};
    display(arr);
    InsertSort(&arr,13);
    display(arr);
    return 0;
}