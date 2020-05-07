#include <stdio.h>
#include <stdlib.h>

int rec(int);
int main()
{
    int n, fact;

    printf("Enter a number to find it's factorial\n");
    scanf("%d",&n);

    fact=rec(n);

    printf("Factorial of %d is %d\n", n, fact);

    return 0;
}

int rec(int x)
{
    int f;

    if(x==1)
    {
        return(1);
    }
    else
    {
        f=x*rec(x-1);
        return(f);
    }
}
