// Binary search in array using recursion
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

int Rsearch(struct array arr, int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            return Rsearch(arr, l, mid - 1, key);
        else
            return Rsearch(arr, mid + 1, h, key);
    }
    return -1;
}
int main()
{
    struct array arr = {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, 10};
    display(arr);
    int x = 18;
    printf("\nSearch Complete for (%d) : Index = [%d]\n", x, Rsearch(arr, 0, arr.len, x));
    return 0;
}