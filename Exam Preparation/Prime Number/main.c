#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;

	printf("Enter a Number to Find if it is Prime or not\n");
	scanf("%d", &n);

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
		{
			printf("%d is not a Prime Number.\n", n);
			break;
		}
		i++;
	}
	if (i == n)
	{
		printf("%d is Prime Number.", n);
	}
	return 0;
}
