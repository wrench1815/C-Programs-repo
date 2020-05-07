#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,c;
    i=1;
    while(i<=10)
    {
        printf("Enter 2 Digits\n");
        scanf("%d %d",&a,&b);

        c=a+b;

        printf("Sum of a and b is %d",c);

        i++;
    }
    return 0;
}
