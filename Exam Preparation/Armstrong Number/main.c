#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, rem, sum=0,n;

    printf("Enter a Number to see if it is Armstrong or not\n");
    scanf("%d",&a);

    n=a;
    while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(a==sum)
	{
		printf("%d is Armstrong\n",a);
	}
	else
	{
		printf("%d is not Armstrong\n",a);
	}
    return 0;
}
