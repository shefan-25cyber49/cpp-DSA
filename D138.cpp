// Sparse matrix
#include <iostream>
using namespace std;

struct element
{
    int I; // row no.
    int J; // column no.
    int X; // value
};
struct spa
{
    int m;   // rows
    int n;   // columns
    int num; // no. of non-zero elements
    struct element *e;
};

void create(struct spa *s)
{
    printf("Enter Dimensions : ");
    scanf("%d %d", &s->m, &s->n);
    printf("No. of Non-zero elements : ");
    scanf("%d", &s->num);

    s->e = (struct element *)new struct element[s->num];
    printf("Enter the Elements(row column value) : \n");
    for (int i = 0; i < s->num; i++)
    {
        scanf("%d %d %d", &s->e[i].I, &s->e[i].J, &s->e[i].X);
    }
}

void display(struct spa s)
{
    int i,j, k = 0;
    printf("\nMatrix:-\n");
    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; j++)
        {
            if (i == s.e[k].I && j == s.e[k].J)

                printf("%d ", s.e[k++].X);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main()
{
    struct spa s;
    create(&s);
    display(s);
    return 0;
}