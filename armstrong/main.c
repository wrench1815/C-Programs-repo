#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, rem, sum=0, x;
    char ch;

    again:

    printf("Enter the Number\n");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(x==sum)
    {
        printf("%d is an Armstrong Number\n",x);
    }
    else
    {
        printf("%d is not an Armstrong Number\n",x);
    }

    fflush(stdin);

    printf("Continue(y/n)\n");
    scanf("%ch",&ch);
    if(ch=='y')
    {
        goto again;
    }
    else
    {
        printf("End!!\n");
    }

    return 0;
}
