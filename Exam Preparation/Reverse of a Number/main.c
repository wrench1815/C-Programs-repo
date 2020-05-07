#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, rem, rev = 0, n;

	printf("Enter a Number to find it's reverse\n");
	scanf("%d", &a);

	n = a;
	while (n > 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}
	printf("Reverse of %d is %d\n", a, rev);
	return 0;
}
