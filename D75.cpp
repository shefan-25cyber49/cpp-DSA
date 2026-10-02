// Linear search in array
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
    cout << endl;
}

int Lsearch(struct array arr, int key)
{
    for (int i = 0; i < arr.len; i++)
        if (key == arr.A[i])
            return i;
}
int main()
{
    struct array arr;
    arr = {{2, 3, 4, 5, 6}, 5};
    display(arr);
    int x = 5;
    cout << "Search complete for " << x << ", Index : " << Lsearch(arr, x);
    return 0;
}