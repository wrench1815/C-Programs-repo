#include <stdio.h>
#include <stdlib.h>

int sum(int);

int main()
{
	int l, add;

	printf("Enter the range to print its sum\n");
	scanf("%d", &l);

	add = sum(l);

	printf("Sum of numbers is : %d", add);

	return 0;
}

int sum(int a)
{
	int i;

	if (a == 1)
	{
		return 1;
	}
	else
	{
		i = a + sum(a - 1);
		return i;
	}
}
