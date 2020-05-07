#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[99], b[99], sum[99];
	int i, n;

	printf("Enter Size for the Arrays\n");
	scanf("%d", &n);

	printf("Enter Elements for Array 1\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter Elements for Array 2\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("Sum of Elements of Array 1 and 2 is\n");
	for (i = 0; i < n; i++)
	{
		sum[i] = a[i] + b[i];
		printf("%d\t", sum[i]);
	}
	return 0;
}
