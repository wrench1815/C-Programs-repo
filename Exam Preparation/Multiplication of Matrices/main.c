#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[99][99], b[99][99], c[99][99];
	int i, j, k, m, n, p, q;


	printf("Enter size of Rows and Columns for Matrix 1\n");
	scanf("%d %d", &m, &n);

	printf("Enter size of Rows and Columns for Matrix 1\n");
	scanf("%d %d", &p, &q);


	if (n == p)
	{
		printf("Matrices can be Multiplied\n");

		printf("Enter Elements for Matrix 1 of size %d x %d\n", m, n);
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				scanf("%d", &a[i][j]);
			}
		}

		printf("Enter Elements for Matrix 2 of size %d x %d\n", p, q);
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < q; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}

		printf("Elements of Matrix 1 are\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < n; j++)
			{
				printf("%d\t", a[i][j]);
			}
			printf("\n");
		}

		printf("Elements of Matrix 2 are\n");
		for (i = 0; i < p; i++)
		{
			for (j = 0; j < q; j++)
			{
				printf("%d\t", b[i][j]);
			}
			printf("\n");
		}

		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				c[i][j] = 0;
				for (k = 0; k < n; k++)
				{
					c[i][j] += (a[i][k] * b[k][j]);
				}
			}
		}

		printf("Multiplication of Matrices is\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				printf("%d\t", c[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Matrices cannot be Multiplied\n");
	}

	return 0;
}
