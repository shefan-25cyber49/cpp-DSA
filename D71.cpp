// display dynamic size Array
#include <iostream>
using namespace std;
struct array
{
    int *A;
    int size;
    int len;
};

void display(struct array arr){
    printf("\nElements :-\n");
    for (int i = 0; i < arr.len; i++)
    {
        printf("%d ",arr.A[i]);
    }
    
}
int main()
{
    struct array arr;
    int n;
    cout << "Enter the Size of Array : ";
    cin >> arr.size;

    arr.A = new int[arr.size];
    arr.len = 0;

    cout << "Enter no. of Elements : ";
    cin >> n;

    printf("\nEnter the Elements :\n");
    for (int i = 0; i < n; i++)
        cin >> arr.A[i];

    arr.len = n;
    display(arr);
    return 0;
}