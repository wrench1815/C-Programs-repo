#include <stdio.h>
#include <stdlib.h>

void nextline();
void with3rdvariable(int *, int, int *);
void without3rdvariable(int *, int, int *);

int main()
{
    int arr1[5], arr2[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("enter array 1 element at %d ", i);
        scanf("%d", &arr1[i]);
    }

    nextline();

    for(i=0; i<5; i++)
    {
        printf("enter array 2 element at %d ", i);
        scanf("%d", &arr2[i]);
    }

    nextline();

    for(i=0; i<5; i++)
    {
        printf("Array 1 element at %d is %d\n", i, arr1[i]);
    }

    nextline();

    for(i=0; i<5; i++)
    {
        printf("Array 2 element at %d is %d\n", i, arr2[i]);
    }

    nextline();

    without3rdvariable(arr1, 5, arr2);

    nextline();

    with3rdvariable(arr1, 5, arr2);

    return 0;
}

void nextline()
{
    printf("\n");
}

void without3rdvariable(int *a, int n, int *b)
{
    int j;
    for(j=0; j<n; j++)
    {
        a[j]=a[j]+b[j];
        b[j]=a[j]-b[j];
        a[j]=a[j]-b[j];
    }

    printf("Without using 3rd Variable\n");

    for(j=0; j<n; j++)
    {
        printf("Array 1 swapped element at %d is %d\n", j, a[j]);
    }

    nextline();

    for(j=0; j<n; j++)
    {
        printf("Array 2 swapped element at %d is %d\n", j, b[j]);
    }
}

void with3rdvariable(int *x, int m, int *y)
{
    int k, t;
    for(k=0; k<m; k++)
    {
        t=x[k];
        x[k]=y[k];
        x[k]=t;
    }

    printf("With 3rd Variable\n");

    for(k=0; k<m; k++)
    {
        printf("Array 1 swapped element at %d is %d\n", k, x[k]);
    }

    nextline();

    for(k=0; k<m; k++)
    {
        printf("Array 2 swapped element at %d is %d\n", k, y[k]);
    }
}
