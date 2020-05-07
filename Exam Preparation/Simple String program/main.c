#include <stdio.h>
#include <stdlib.h>

int main()
{
	char s[99];

	printf("Enter your Name\n");
	gets(s);
	printf("Hello %s\n", s);

	return 0;
}
