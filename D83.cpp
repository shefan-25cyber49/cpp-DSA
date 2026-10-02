// Sum of all Elements in array
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

int sum(struct array arr)
{
    int s = 0;
    for (int i = 0; i < arr.len; i++)
        s += arr.A[i];
    return s;
}

int main()
{
    struct array arr = {{1,2,3,4,5,6,7,8,9,0}, 10};
    display(arr);
    cout << "Smallest Element = " << sum(arr) << endl;
    return 0;
}