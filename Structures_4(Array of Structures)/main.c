#include <stdio.h>
#include <stdlib.h>

struct book
{
	char name;
	float price;
	int page;
};

int main()
{
	struct book b[9];

	int i;

	for (i = 0; i < 3; i++)
	{
		printf("Enter Name, Price and Pages of Book %d\n", i);
		fflush(stdin);
		scanf("%c %f %d", &b[i].name, &b[i].price, &b[i].page);
	}

	for (i = 0; i < 3; i++)
	{
		printf("Entered Name, Price and Pages of Book %d\n", i);
		printf("%c %f %d\n", b[i].name, b[i].price, b[i].page);
	}

	return 0;
}
