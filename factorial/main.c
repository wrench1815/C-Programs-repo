#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int main()
{
    int n, fact;

    printf("Enter a number to find factorial of\n");
    scanf("%d",&n);

    fact=factorial(n);

    printf("Factorial of %d is %d",n,fact);

    return 0;
}

int factorial(int a)
{
    int y=1,i;

    for(i=a;i>=1;i--)
    {
        y=y*i;
    }
    return(y);
}
