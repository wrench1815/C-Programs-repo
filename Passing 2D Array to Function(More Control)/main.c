#include <stdio.h>
#include <stdlib.h>

void ArrayDisplay(int *a, int r, int c);

int main()
{
    int arr[99][99];
    int row, column;
    int i, j;

    printf("Enter no. of Rows for the Matrix\n");
    scanf("%d", &row);
    printf("Enter no. of Columns for the Matrix\n");
    scanf("%d", &column);

    for(i=0; i<row; i++)
    {
        printf("Enter %d Column Elements for Row %d\n", column, i);

        for(j=0; j<column; j++)
        {
            printf("Column %d : ", j);
            scanf("%d", &arr[i][j]);
        }
    }

    ArrayDisplay(arr, row, column);

    return 0;
}

void ArrayDisplay(int *a, int r, int c)
{
    int s, t;

    for(s=0; s<r; s++)
    {
        for(t=0; t<c; t++)
        {
            printf("%d\t", *(a+s*c+t));
        }
        printf("\n");
    }
}
