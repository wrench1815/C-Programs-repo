#include <stdio.h>
#include <stdlib.h>

void display(char*, char*, int);

struct book
{
	char name[99];
	char author[99];
	int phone;
};

int main()
{
	struct book b;

	printf("Enter Book Name : ");
	gets(b.name);
	printf("Enter Author Name : ");
	gets(b.author);
	printf("Enter Phone no. : ");
	scanf("%d", &b.phone);

	display(b.name, b.author, b.phone);
	return 0;
}

void display(char*n, char*a, int p)
{
	printf("Entered Information\n");
	printf("Book Name : %s\nAuthor Name : %s\nPhone Number : %d\n", n, a, p);
}
