#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[99], b[99];
	int i, z = 0;

	printf("Enter 5 Elements for array  1\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter 5 Elements for array  2\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (a[i] == b[i])
		{
			printf("Element at index %d are\narray 1 = %d\narray 2 = %d\n", i, a[i], b[i]);
			z++;
		}
		else
		{
			printf("Element at index %d are\narray 1 = %d\narray 2 = %d\n", i, a[i], b[i]);
		}
	}
	if (z == 5)
	{
		printf("Array 1 is same as Array 2\n");
	}
	else
	{
		printf("Array 1 is not same as Array 2\n");
	}
	return 0;
}
