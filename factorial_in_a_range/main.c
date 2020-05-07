#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fact, f, l, i;
    printf("Enter the range to find Factorial of \n");
    scanf("%d %d",&f,&l);
    while(f<=l)
    {
        fact=1;
        i=f;
        while(i>0)
        {
            fact = fact*i;
            i--;
        }
        printf("The Factorial of %d is %d\n",f,fact);
        f++;
    }
    return 0;
}
