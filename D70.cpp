// Display an Array
#include <iostream>
using namespace std;
struct array
{
    int A[10];
    int size;
    int len;
};

void display(struct array arr){
    int i;
    printf("\nElements :-\n");
    for (i = 0; i < arr.len; i++)
        cout<<arr.A[i]<<endl;
}
int main()
{
    struct array arr = {{2,3,4,5,6},10,5};
    display(arr);
    return 0;
}