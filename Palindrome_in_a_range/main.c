#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f, l, rem, sum;

    printf("Enter the range to check if it is Palindrome or not\n");
    scanf("%d %d",&f,&l);
    while(f<=l)
    {

        sum=0;
        n=f;
        while(n>0)
        {
            rem=n%10;
            sum=sum*10+rem;
            n=n/10;
        }
        if(sum==f)
        {
            printf("%d is a Palindrome\n",f);
        }
        else
        {
            printf("%d is not a Palindrome\n",f);
        }
        f++;
    }

    return 0;
}
