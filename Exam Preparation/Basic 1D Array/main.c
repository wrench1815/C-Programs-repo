#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a[99];
	int i, s;

	printf("Enter size for the Array\n");
	scanf("%d", &s);

	printf("Enter Array Elements\n");
	for (i = 0; i < s; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Entered Array Elements are\n");
	for (i = 0; i < s; i++)
	{
		printf("%d\t", a[i]);
	}
	return 0;
}
