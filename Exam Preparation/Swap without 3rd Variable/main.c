#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b;

	printf("Enter Number 1\n");
	scanf("%d", &a);
	printf("Enter Number 2\n");
	scanf("%d", &b);

	a = a + b;
	b = a - b;
	a = a - b;
	printf("Swapped Values %d %d\n", a, b);

	return 0;
}
