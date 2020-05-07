#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum,f, l;

    printf("Enter the range\n");
    scanf("%d %d",&f,&l);

    sum=0;
    i=f;
    while(i<=l)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of given range %d - %d is %d\n",f,l,sum);

    return 0;
}
