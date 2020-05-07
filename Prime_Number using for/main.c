#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    printf("Enter a Number to see if it is Prime or Not\n");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
        {
            printf("%d is Not a Prime Number\n",n);
            break;
        }
    }
    if(i==n)
    {
        printf("%d is a Prime Number\n",n);
    }
    return 0;
}
