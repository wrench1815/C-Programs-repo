#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, c;

	printf("Enter 3 Numbers to Find the Greatest of \n");

    printf("a :- ");
    scanf("%d",&a);

    printf("b :- ");
    scanf("%d",&b);

    printf("c :- ");
    scanf("%d",&c);

	if (a > b && a > c)
	{
		printf("a (%d) is Greatest of b (%d) and c (%d)\n", a, b, c);
	}
	if (b > a && b > c)
	{
		printf("b (%d) is Greatest of a (%d) and c (%d)\n", b, a, c);
	}
	if (c > a && c > b)
	{
		printf("c (%d) is Greatest of a (%d) and b (%d)\n", c, a, b);
	}
	return 0;
}
