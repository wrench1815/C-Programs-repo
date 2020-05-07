#include <stdio.h>
#include <stdlib.h>

void ArrayDisplay(int *, int, int);

int main()
{
    int arr[4][4]=
    {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    ArrayDisplay(arr,4,4);

    return 0;
}

void ArrayDisplay(int *a,int row,int column)
{
    int i,j;

    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",*(a+i*column+j));
        }
        printf("\n");
    }
}
