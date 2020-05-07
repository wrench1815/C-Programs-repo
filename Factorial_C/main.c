#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact = 1, num, i;
    printf("Enter the Number to find Factorial of \n");
    scanf("%d",&num);
    i=num;
    while(i>0)
    {
        fact = fact*i;
        i--;
    }
    printf("The Factorial of %d is %d",num,fact);
    return 0;
}
