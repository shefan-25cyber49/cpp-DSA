// Adding two Sparse matrix
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
    int i, j, k = 0;
    printf("\nMatrix:-\n");
    for (i = 0; i < s.m; i++)
    {
        for (j = 0; j < s.n; j++)
        {
            if (k < s.num && i == s.e[k].I && j == s.e[k].J)

                printf("%d ", s.e[k++].X);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

struct spa *add(struct spa *s1, struct spa *s2)
{
    struct spa *sum;
    if (s1->m != s2->m || s1->n != s2->n)
    {
        return 0;
    }
    sum = (struct spa *)new spa;
    sum->m = s1->m;
    sum->n = s1->n;
    sum->e = (struct element *)new element[s1->num + s2->num];
    int i = 0, j = 0, k = 0;

    while (i < s1->num && j < s2->num)
    {
        if (s1->e[i].I < s2->e[j].I)
        {
            sum->e[k++] = s1->e[i++];
        }
        else if (s1->e[i].I > s2->e[j].I)
        {
            sum->e[k++] = s2->e[j++];
        }
        else
        {
            if (s1->e[i].J < s2->e[j].J)
            {
                sum->e[k++] = s1->e[i++];
            }
            else if (s1->e[i].J > s2->e[j].J)
            {
                sum->e[k++] = s2->e[j++];
            }
            else
            {
                sum->e[k].I = s1->e[i].I;
                sum->e[k].J = s1->e[i].J;
                sum->e[k].X = s1->e[i].X + s2->e[j].X;
                k++;
                i++;
                j++;
            }
        }
    }
    for (; i < s1->num; i++)
        sum->e[k++] = s1->e[i];
    for (; j < s2->num; j++)
        sum->e[k++] = s2->e[j];

    sum->num = k;
    return sum;
}

int main()
{
    struct spa s1, s2;
    struct spa *s3;

    printf("For Matrix A :-\n");
    create(&s1);
    printf("For Matrix B :-\n");
    create(&s2);

    printf("Matrix A :-\n");
    display(s1);
    printf("Matrix B :-\n");
    display(s2);

    s3 = add(&s1, &s2);
    printf("Matrix A+B :-\n");
    display(*s3);

    return 0;
}