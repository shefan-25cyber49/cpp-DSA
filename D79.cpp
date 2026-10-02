// Get - read an element at a index in Array
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

int get(struct array arr, int index)
{
    if (index >= 0 && index < arr.len)
        return arr.A[index];
    else
        return -1;
}

int main()
{
    struct array arr = {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, 10};
    display(arr);
    int a, i = 5;
    a = get(arr, i);
    printf("\nThe Element at index [%d] = %d\n", i, a);
    return 0;
}