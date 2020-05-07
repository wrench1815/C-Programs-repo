#include <stdio.h>
#include <stdlib.h>

int main()
{
	struct book
	{
		char name;
		float price;
		int pages;
	};
	struct book b1 = {'B', 130.0, 550};
	struct book b2 = {'C', 123.0, 679};
	struct book b3 = {'D', 234.0, 345};

	printf("Address of name = %u\n", &b1.name);
	printf("Address of price = %u\n", &b1.price);
	printf("Address of pages = %u\n", &b1.pages);

	printf("\n");

	printf("Address of name = %u\n", &b2.name);
	printf("Address of price = %u\n", &b2.price);
	printf("Address of pages = %u\n", &b2.pages);

	printf("\n");

	printf("Address of name = %u\n", &b3.name);
	printf("Address of price = %u\n", &b3.price);
	printf("Address of pages = %u\n", &b3.pages);

	return 0;
}
