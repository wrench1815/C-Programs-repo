#include <stdio.h>
#include <stdlib.h>

int main()
{
	char name[3];
	float price[3];
	int pages[3], i;

	printf("Enter Names, Price and no. of Pages of 3 Books\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%s %f %d", &name[i], &price[i], &pages[i]);
	}
	printf("Entered Name, Price and no. of Pages of 3 Books\n");
	for (i = 0; i < 3; i++)
	{
		printf("%c %f %d\n", name[i], price[i], pages[i]);
	}

	return 0;
}
