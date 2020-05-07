#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, first, second, third, i;

	first = 0;
	second = 1;

	printf("Enter Range upto which to display Fibonacci Series\n");
	scanf("%d", &n);

	printf("Fibonacci Series upto %d is \n", n);
	printf("%d %d ", first, second);
	for (i = 2; i < n; i++)
	{
		third = first + second;
		printf("%d ", third);
		first = second;
		second = third;
	}

	return 0;
}
