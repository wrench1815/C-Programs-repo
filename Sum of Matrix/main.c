#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[99][99];
	int i, j, m, n, sum, sub, mul, div, rem;

	sum = 0;
	sub = 0;
	mul = 1;
	div = 1;
	rem = 0;

	printf("Enter size for Rows of the Matrix\n");
	scanf("%d", &m);
	printf("Enter size for Columns of the Matrix\n");
	scanf("%d", &n);

	for (i = 0; i < m; i++)
	{
		printf("Enter Elements of Row %d\n", i);
		for (j = 0; j < n; j++)
		{
			printf("Column %d : ", j);
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			sum += a[i][j];
			sub -= a[i][j];
			mul *= a[i][j];
			div /= a[i][j];
			mul %= a[i][j];
		}
	}

	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}

	printf("Sum of the Matrix Elements is : %d\n", sum);
	printf("Subtraction of the Matrix Elements is : %d\n", sub);
	printf("Multiplication of the Matrix Elements is : %d\n", mul);
	printf("Division of the Matrix Elements is : %d\n", div);
	printf("Remainder of the Matrix Elements is : %d\n", rem);

	return 0;
}
