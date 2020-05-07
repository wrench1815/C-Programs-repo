#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[99];
	int i, n, sum;

	sum = 0;

	printf("Enter Size of Array\n");
	scanf("%d", &n);

	printf("Enter Array Elements of Size %d\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < n; i++)
	{
		sum += a[i];
	}
	printf("Sum of Array Elements is %d\n", sum);

	return 0;
}
