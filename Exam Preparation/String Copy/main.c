#include <stdio.h>
#include <stdlib.h>

void stringcpy(char *, char *);

int main()
{
	char s1[99], s2[99];

	printf("Enter Source String\n");
	gets(s1);

	stringcpy(s2, s1);

	printf("Source String :- %s\n", s1);
	printf("Target String :- %s\n", s2);

	return 0;
}

void stringcpy(char*b, char*a)
{
	while (*a != '\0')
	{
		*b = *a;
		b++;
		a++;
	}
	*b = '\0';
}
