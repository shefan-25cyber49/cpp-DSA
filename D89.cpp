// Check if array is SORTED or not
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

int isSorted(struct array arr)
{
    for (int i = 0; i < arr.len - 1; i++)
    {
        if (arr.A[i] > arr.A[i + 1])
            return 0;
    }
    return 1;
}

int main()
{
    struct array arr = {{2, 6, 5, 7, 8, 9, 12, 15, 17, 18}, 10};
    display(arr);
    int s = isSorted(arr);
    if (s == 0)
    {
        cout << s << " : Array is NOT Sorted" << endl;
    }
    else
        cout << s << " : Array is Sorted" << endl;

    return 0;
}