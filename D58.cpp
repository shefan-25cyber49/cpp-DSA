// Tower of Hanoi GAME
#include <iostream>
using namespace std;

// n  = no. of disks; A,B,C are tower no. 1,2,3; and S = no. of moves/steps or ordered pairs
void TOH(int n, int A, int B, int C, int &S)
{
    if (n > 0)
    {
        TOH(n - 1, A, C, B, S);
        printf("Step %d : (%d,%d)\n", S, A, C);
        S++;
        TOH(n - 1, B, A, C, S);
    }
}
int main()
{
    int n, S = 1;
    printf("*TOWER OF HANOI*\nEnter the No. of Disks : ");
    scanf("%d", &n);
    TOH(n, 1, 2, 3, S);
    return 0;
}