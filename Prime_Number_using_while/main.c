#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i;
    printf("Enter a Number \n");
    scanf("%d",&num);

    i = 2;
    while(i<=num-1)
    {
        if(num%i==0)
        {
            printf("%d is not a Prime Number.",num);
            break;
        }
        i++;
    }
    if(i==num)
    {
        printf("%d is a Prime Number.",num);
    }
    return 0;
}
