#include <stdio.h>
#include <stdlib.h>
#define x 4
int main()
{
	int n, mul;

	printf("Enter a Number to Multiply it with 4\n");
	scanf("%d", &n);

	mul = n * x;
	printf("Multiplication of %d with 4 is %d\n", n, mul);
	return 0;
}
