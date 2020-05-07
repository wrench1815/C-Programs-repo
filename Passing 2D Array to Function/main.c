#include <stdio.h>
#include <stdlib.h>

void display(int *, int, int);

int main()
{
    int a[3][4]=
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    display(a, 3, 4);

    return 0;
}

void display(int *p, int row, int column)
{
    int i, j;

    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("%d\t", *(p+i*column+j));
        }
        printf("\n");
    }
    printf("\n");
}
