#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, t, rem, sum = 0;

	printf("Enter a Number to check if it is Palindrome or not\n");
	scanf("%d", &n);
	t = n;
	while (n > 0)
	{
		rem = n % 10;
		sum = sum * 10 + rem;
		n = n / 10;
	}
	if (sum == t)
	{
		printf("%d is a Palindrome\n", t);
	}
	else
	{
		printf("%d is not a Palindrome\n", t);
	}
	return 0;
}
