#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[99], b[99];
	int i, c;

	printf("Enter 5 elements for Array 1\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter 5 elements for Array 2\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 5; i++)
	{
		c = a[i];
		a[i] = b[i];
		b[i] = c;
	}
	printf("5 elements of Array 1\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", a[i]);
	}
	printf("5 elements of Array 2\n");
	for (i = 0; i < 5; i++)
	{
		printf("%d\n", b[i]);
	}

	return 0;
}
