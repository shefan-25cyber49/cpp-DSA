// Average of all Elements in array
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

float avg(struct array arr)
{
    float s = 0, a;
    for (int i = 0; i < arr.len; i++)
        s += arr.A[i];
    a = s / (arr.len);
    return a;
}

int main()
{
    struct array arr = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}, 10};
    display(arr);
    printf("Average of Elements = %f\n", avg(arr));
    return 0;
}