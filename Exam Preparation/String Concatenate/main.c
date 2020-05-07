#include <stdio.h>
#include <stdlib.h>

void StringJoin(const char *, const char *, char *);

int main()
{
	char s1[99], s2[99], s3[99];

	printf("Enter String 1\n");
	gets(s1);

	printf("Enter String 2\n");
	gets(s2);

	StringJoin(s1, s2, s3);

	printf("String 1 :- %s", s1);
	printf("String 2 :- %s", s2);
	printf("New String :- %s", s3);

	return 0;
}

void StringJoin(const char *a, const char *b, char *c)
{
	while (*a != '\0')
	{
		*c = *a;
		c++;
		a++;
	}
	*c = ' ';
	c++;
	*c = '\0';

	while (*b != '\0')
	{
		*c = *b;
		c++;
		b++;
	}
	*c = '\0';
}
