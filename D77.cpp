// Binary search in array using loops
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

int Bsearch(struct array arr, int key)
{
    int l = 0, h = arr.len - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (key == arr.A[mid])
            return mid;
        else if (key < arr.A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int main()
{
    struct array arr = {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, 10};
    display(arr);
    int x = 12;
    printf("\nSearch Complete for (%d) : Index = [%d]\n", x, Bsearch(arr, x));
    return 0;
}