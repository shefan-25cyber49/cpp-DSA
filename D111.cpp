// Finding min. & max. of array in a single scan
#include <iostream>
using namespace std;

int main()
{
    int min, max;
    int A[10] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    min = A[0];
    max = A[0];
    for (int i = 1; i < 10; i++)
    {
        if (A[i] < min)
            min = A[i];
        else if (A[i] > max)
            max = A[i];
    }

    cout << "Max : " << max << endl
         << "Min : " << min << endl;

    return 0;
}