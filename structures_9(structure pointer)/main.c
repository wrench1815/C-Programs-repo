#include <stdio.h>
#include <stdlib.h>

struct book
{
	char title[99];
	char author[99];
	int phone_no;
};

int main()
{
	struct book b1;
	struct book *p;

	printf("Enter the data for the book\n");
	printf("Enter the Title of the Book\n");
	gets(b1.title);
	printf("Enter the Author's name\n");
	gets(b1.author);
	printf("Enter the Phone no.\n");
	scanf("%d", &b1.phone_no);

	p = &b1;

	printf("Entered Data\n");
	printf("Title : %s\n", b1.title);
	printf("Author : %s\n", b1.author);
	printf("Phone no. : %d\n", b1.phone_no);

	printf("\n");

	printf("Pointer to structure\n");
	printf("Title : %s\n", p->title);
	printf("Author : %s\n", p->author);
	printf("Phone no. : %d\n", p->phone_no);

	return 0;
}
