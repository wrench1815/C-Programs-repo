#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,c;
    c=0;

    for(i=1;i<=10;i++)
    {
        c=c+i;
    }
    printf("Sum of first 10 numbers is %d",c);

    return 0;
}
