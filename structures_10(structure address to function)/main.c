#include <stdio.h>
#include <stdlib.h>

struct book
{
	char title[99];
	char author[99];
	unsigned int phone_no;
};

void display(struct book *);

int main()
{
	struct book b1;

	printf("Enter the data for the Book\n");
	printf("Enter the Title of the Book\n");
	gets(b1.title);
	printf("Enter the Author's name\n");
	gets(b1.author);
	printf("Enter the Phone no.\n");
	scanf("%u", &b1.phone_no);

	display(&b1);

	return 0;
}

void display(struct book *p)
{
    printf("Pointer address to structure\n");
	printf("Title : %s\n", p->title);
	printf("Author : %s\n", p->author);
	printf("Phone no. : %u\n", p->phone_no);
}
