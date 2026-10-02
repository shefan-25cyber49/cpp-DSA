#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int coeff;
    int pow;
    struct Node *next;
};

struct Node *createNode(int coeff, int pow)
{
    struct Node *newNode = new Node;
    newNode->coeff = coeff;
    newNode->pow = pow;
    newNode->next = NULL;
    return newNode;
}

void addNode(struct Node **poly, int coeff, int pow)
{
    struct Node *newNode = createNode(coeff,pow);
    newNode->next = *poly;
    *poly = newNode;
}

struct Node *addPolynomials(struct Node *poly1,struct Node *poly2)
{
    struct Node *result = NULL;
    while (poly1 != NULL || poly2 != NULL)
    {
        int coeff, pow;
        if (poly1 == NULL)
        {
            coeff = poly2->coeff;
            pow = poly2->pow;
            poly2 = poly2->next;
        }
        else if (poly2 == NULL)
        {
            coeff = poly1->coeff;
            pow = poly1->pow;
            poly1 = poly1->next;
        }
        else if (poly1->pow > poly2->pow)
        {
            coeff = poly1->coeff;
            pow = poly1->pow;
            poly1 = poly1->next;
        }
        else if (poly1->pow < poly2->pow)
        {
            coeff = poly2->coeff;
            pow = poly2->pow;
            poly2 = poly2->next;
        }
        else
        {
            coeff = poly1->coeff + poly2->coeff;
            pow = poly1->pow;
            poly1 = poly1->next;
            poly2 = poly2->next;
        }
        addNode(&result, coeff, pow);
    }
    return result;
}

void printPolynomial(struct Node *poly)
{
    while (poly != NULL)
    {
        printf("%dx^%d", poly->coeff, poly->pow);
        poly = poly->next;
        if (poly != NULL)
            printf(" + ");
    }
    printf("\n");
}

int main()
{
    struct Node *poly1 = NULL;
    struct Node *poly2 = NULL;

    addNode(&poly1, 2, 0);
    addNode(&poly1, 4, 1);
    addNode(&poly1, 5, 2);

    addNode(&poly2, 5, 0);
    addNode(&poly2, 5, 1);

    struct Node *sum = addPolynomials(poly1, poly2);
    printf("Sum of polynomials: ");
    printPolynomial(sum);
    return 0;
}
