#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a;

	printf("Enter a Number to see if it is Even or odd\n");
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("%d is Even\n", a);
	}
	else
	{
		printf("%d is Odd\n", a);
	}
	return 0;
}
