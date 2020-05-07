#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, rem,rev=0,n;

	printf("Enter a Number to find it's Palindrome\n");
	scanf("%d",&a);

	n=a;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(a==rev)
	{
		printf("%d is a Palindrome Number\n",a);
	}
	else
	{
		printf("%d is not a Palindrome Number\n",a);
	}
    return 0;
}
