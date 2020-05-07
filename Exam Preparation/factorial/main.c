#include <stdio.h>
#include <stdlib.h>

int main()
{
	int f, i, fact = 1;

	printf("Enter a Number to Find it's factorial\n");
	scanf("%d", &f);

	for (i = f; i >= 1; i--)
	{
		fact = fact * i;
	}
	printf("Factorial of %d is %d", f, fact);

	return 0;
}
