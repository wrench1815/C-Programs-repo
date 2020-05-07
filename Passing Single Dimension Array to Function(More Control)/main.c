#include <stdio.h>
#include <stdlib.h>

void display(int *, int);

int main()
{
    int num[99];
    int n, i;

    printf("Enter Size of Array\n");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter Element %d of array : ", i);
        scanf("%d", &num[i]);
    }

    display(&num[0], n);

    return 0;
}

void display(int *j, int n)
{
    int i;

    for(i=0; i<n; i++)
    {
        printf("element %d = %d\n", i, *j);
        j++;
    }
}
