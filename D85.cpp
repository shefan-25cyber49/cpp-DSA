// Sum of all Elements in array by Recursion
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

int sum(struct array arr, int n)
{
    if (n < 0)
        return 0;
    else
        return sum(arr, n - 1) + arr.A[n];
}

int main()
{
    struct array arr = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, 10};
    int n = arr.len;
    display(arr);
    cout << "Sum = " << sum(arr, n) << endl;
    return 0;
}