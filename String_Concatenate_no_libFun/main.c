#include <stdio.h>
#include <stdlib.h>

void stringjoin(char *, const char *);
int stringsize(char *);

int main()
{
	char s1[99];
	char s2[99];

	printf("Program to add string 1 at the End of string 2\n");
	getch();
	printf("Enter Source String\n");
	gets(s1);
	printf("Enter Target String\n");
	gets(s2);

	stringjoin(s2, s1);
	printf("Source String = %s\n", s1);
	printf("Target String = %s\n", s2);

	return 0;
}

void stringjoin(char *b, const char *a)
{
	int m;
	char *n;

	m = stringsize(b);
	n = &b[m];

	while (*a != '\0')
	{
		*n = *a;
		a++;
		n++;
	}
	*n='\0';
}

int stringsize(char *x)
{
	int length = 0;

	while (*x != 0)
	{
		length++;
		x++;
	}
	return (length);
}
