#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[99][99], b[99][99], c[99][99], i, j, m, n;

	printf("Enter size for rows and columns\n");
	scanf("%d %d", &m, &n);


	printf("Enter Matrix 1 Elements of %d x %d\n", m, n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter Matrix 2 Elements of %d x %d\n", m, n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}


	printf("Elements of Matrix 1\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("Elements of Matrix 2\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}


	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}


	printf("Sum of Matrix 1 and Matrix 2\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}

	return 0;
}
