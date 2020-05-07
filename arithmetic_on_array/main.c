#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[99], b[99];
    int i, n, sum[99], sub[99], mul[99], div[99], rem[99];

    printf("enter array size\n");
    scanf("%d", &n);

    printf("Enter elements of array 1 of size %d\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter elements of array 2 of size %d\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }

    for(i=0; i<n; i++)
    {
        sum[i]=a[i]+b[i];
        sub[i]=a[i]-b[i];
        mul[i]=a[i]*b[i];
        div[i]=a[i]/b[i];
        rem[i]=a[i]%b[i];
    }

    printf("Sum\tSubtraction\tMultiplication\tDivision\tRemainder\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", sum[i],sub[i],mul[i],div[i],rem[i]);
    }

    return 0;
}
