#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[99];
    int i, s;

    printf("enter array size\n");
    scanf("%d", &s);

    printf("Enter array of size %d\n",s);
    for(i=0; i<s; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Entered array is ");
    for(i=0; i<s; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
