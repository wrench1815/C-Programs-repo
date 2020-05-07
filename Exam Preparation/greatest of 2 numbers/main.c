#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;

	printf("Enter 2 Numbers to see which is greatest\n");
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		printf("a (%d) is greater than b (%d)\n", a, b);
	}
	else
	{
		printf("b (%d) is greater than a (%d)\n", b, a);
	}
	return 0;
}
