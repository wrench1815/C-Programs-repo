#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[99],*cpy[99];
    int i,n;

    printf("Enter size of Array\n");
    scanf("%d",&n);

    printf("Enter Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    for(i=0;i<n;i++)
    {
        cpy[i]=array+i;
    }

    printf("Entered Elements\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",array[i]);
    }

    printf("\n");

    printf("Array Elements\n");
    for(i=0;i<n;i++)
    {
        printf("%u %u %d\n",cpy[i],*cpy[i],*(*cpy+i));
    }

    return 0;
}
