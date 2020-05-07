#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, sum, sub, mul, div;

	printf("Enter 2 Numbers to perform Arithmetic Operations on\n");
	scanf("%d %d", &a, &b);

	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;

	printf("\t\tArithmetic Operations\n\n");
	printf("\tInputed Numbers are :- %d , %d\n", a, b);
	printf("\tSum = %d\n", sum);
	printf("\tSubtraction = %d\n", sub);
	printf("\tMultiplication = %d\n", mul);
	printf("\tDivision = %d\n", div);

	return 0;
}
