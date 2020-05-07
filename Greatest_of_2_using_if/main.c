#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**< Program demonstrating if statement!! */
    int a, b;

    printf("Enter 2 Numbers to check Greatest!\n");
    scanf("%d \n%d",&a,&b);

    if(a>b)
    {
        printf("a (%d) is Greater.\n",a);
    }
    if(b>a)
    {
        printf("b (%d) is Greater\n",b);
    }

    return 0;
}
