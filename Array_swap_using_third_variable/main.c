#include <stdio.h>
#include <stdlib.h>

void nextline();

int main()
{
    int arr1[5], arr2[5];
    int i, arr3;

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

    for(i=0; i<5; i++)
    {
        arr3=arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=arr3;
    }

    nextline();

    for(i=0; i<5; i++)
    {
        printf("Array 1 swapped element at %d is %d\n", i, arr1[i]);
    }

    nextline();

    for(i=0; i<5; i++)
    {
        printf("Array 2 swapped element at %d is %d\n", i, arr2[i]);
    }

    return 0;
}

void nextline()
{
    printf("\n");
}
