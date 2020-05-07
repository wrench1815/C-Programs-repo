#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;

	printf("Enter Number 1\n");
	scanf("%d", &a);
	printf("Enter Number 2\n");
	scanf("%d", &b);

	c = a;
	a = b;
	b = c;
	printf("Swapped Values %d %d", a, b);

	return 0;
}
