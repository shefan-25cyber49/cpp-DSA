// Largest/max Element in array
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

int max(struct array arr)
{
    int m = arr.A[0];
    for (int i = 1; i < arr.len; i++)
    {
        if (arr.A[i] > m)
            m = arr.A[i];
    }
    return m;
}

int main()
{
    struct array arr = {{8, 3, 9, 15, 6, 10, 7, 2, 12, 4}, 10};
    display(arr);
    cout << "Largest Element = " << max(arr) << endl;
    return 0;
}