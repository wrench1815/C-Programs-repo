#include <stdio.h>
#include <stdlib.h>

int length(char *);

int main()
{
	char s[99];
	int size;

	printf("Enter a String\n");
	gets(s);

	size = length(s);
	printf("Size of String is %d \n", size);

	return 0;
}

int length(char *a)
{
	int x = 0;
	while (*a != '\0')
	{
		x++;
		a++;
	}
	return (x);
}
