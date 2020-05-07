#include <stdio.h>
#include <stdlib.h>

void display(int *q, int, int);
void show(int (*q)[99], int, int);
void print(int q[][99], int, int);

int main()
{
    int a[99][99];
    int m, n, i, j;

    printf("Enter the size of Rows\n");
    scanf("%d", &m);
    printf("Enter the Size of Columns\n");
    scanf("%d", &n);

    for(i=0; i<m; i++)
    {
        printf("\n");
        printf("Enter row %d\ of the Matrix\n", i);
        for(j=0; j<n; j++)
        {
            printf("Column %d : ", j);
            scanf("%d", &a[i][j]);
        }
    }

    display(a, m, n);
    show(a, m, n);
    print(a, m, n);

    return 0;
}

void display(int *q, int row, int col)
{
    int i, j;

    printf("\n");
    printf("Entered matrix is : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t", *(q+i*col+j));
        }
        printf("\n");
    }
    printf("\n");
}

void show(int (*q)[99], int row, int col)
{
    int i, j;
    int *p;

    printf("\n");
    printf("Entered matrix is : \n");
    for(i=0; i<row; i++)
    {
        p=q+i;
        for(j=0; j<col; j++)
        {
            printf("%d\t", *(p+j));
        }
        printf("\n");
    }
    printf("\n");
}

void print(int q[][99], int row, int col)
{
    int i, j;

    printf("\n");
    printf("Entered matrix is : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t", q[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
