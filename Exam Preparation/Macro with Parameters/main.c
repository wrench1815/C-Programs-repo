#include <stdio.h>
#include <stdlib.h>
#define MUL(x) (4*x)

int main()
{
	int n, a;

	printf("Enter a Number to add it with 4\n");
	scanf("%d", &n);

	a = MUL(n);

	printf("Multiplication of %d is %d\n", n, a);

	return 0;
}
