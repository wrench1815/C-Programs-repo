#include <stdio.h>
#include <stdlib.h>

struct book
{
	char name[99];
	char author[99];
	int phone;
};

void display(struct book);

int main()
{
	struct book b;

	printf("Enter Book Name : ");
	gets(b.name);
	printf("Enter Author Name : ");
	gets(b.author);
	printf("Enter Phone no. : ");
	scanf("%d", &b.phone);

	display(b);

	return 0;
}

void display(struct book x)
{
	printf("Entered Information\n");
	printf("Book Name : %s\nAuthor Name : %s\nPhone Number : %d\n", x.name, x.author, x.phone);
}
