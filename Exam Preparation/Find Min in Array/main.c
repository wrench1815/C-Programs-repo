#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[99];
	int i, n, min;

	printf("Enter Size of Array \n");
	scanf("%d", &n);

	printf("Enter Elements for Array of Size %d\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	min = a[0];
	for (i = 0; i < n; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	printf("Min Number in the Array %d\n", min);
	return 0;
}
