// Quiz Q.2
#include <iostream>
using namespace std;

void f(int n, int sum)
{
    int k = 0, j = 0;
    if (n == 0)
        return;
    k = n % 10;
    j = n / 10;
    sum += k;
    f(j, sum);
    printf("%d ", k);
}

int main()
{
    int a = 2048, sum = 0;
    f(a, sum); // pass by value
    cout << sum << endl;
    return 0;
}