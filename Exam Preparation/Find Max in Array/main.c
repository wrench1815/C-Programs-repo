#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[99];
	int i, n, max;

	printf("Enter Size of Array \n");
	scanf("%d", &n);

	printf("Enter Elements for Array of Size %d\n", n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (i = 0; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("Max Number in the Array %d\n", max);
	return 0;
}
