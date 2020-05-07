#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f, l, n, rem, sum;

    printf("Enter the range\n");
    scanf("%d %d",&f,&l);
    while(f<=l)
    {
        sum=0;
        n=f;
        while(n>0)
        {
            rem=n%10;
            sum=sum+(rem*rem*rem);
            n=n/10;
        }
        if(f==sum)
        {
            printf("%d is an Armstrong Number\n",f);
        }
        else
        {
            printf("%d is not an Armstrong Number\n",f);
        }
        f++;
    }
    return 0;
}
