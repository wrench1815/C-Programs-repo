#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[99][99];
	int i, j, m, n, sum;

	sum = 0;

	printf("Enter size for rows and columns\n");
	scanf("%d %d", &m, &n);


	printf("Enter Matrix Elements of %d x %d\n", m, n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Elements of Matrix \n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum += a[i][j];
		}
	}
	printf("Sum of Matrix Elements is %d\n", sum);

	return 0;
}
