#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f,l;

    printf("Enter the range you want to find Even Odd of \n");
    scanf("%d %d",&f,&l);
    n=f;

    while(n<=l)
    {
        if(n%2==0)
    {
        printf("%d is Even\n",n);
    }
    else
    {
        printf("%d is Odd\n",n);
    }
    n++;
    }
    return 0;
}
