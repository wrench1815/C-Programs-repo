#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[99][99];
    int *b[99][99];
    int i, j, n;

    printf("Enter Size of Array\n");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("Enter Elements in row %d\n", i);
        for(j=0; j<n; j++)
        {
            printf("Column %d : ", j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            b[i][j]=a+i+j;
        }
    }

    printf("Entered Elements of Array\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%u\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Entered Elements of Array\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%u\t", *b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Entered Elements of Array\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", *(*(b+i)+j));
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
