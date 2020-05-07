#include <stdio.h>
#include <stdlib.h>

void stringcopy(char *, const char *);

int main()
{
	char s1[99];
	char s2[99];

	printf("Enter the Source String\n");
	gets(s1);

	stringcopy(s2, s1);
	printf("Source String = %s\n", s1);
	printf("Target String = %s\n", s2);

	return 0;
}

void stringcopy(char *a, const char *b)
{
	while (*b != '\0')
	{
		*a = *b;
		b++;
		a++;
	}
	*a = '\0';
}
