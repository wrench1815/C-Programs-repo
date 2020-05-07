#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s1[] = "Folks!";
	char s2[99] = "Hello ";

	strcat(s2, s1);
	printf("Source String = %s\n", s1);
	printf("Target String = %s\n", s2);

	return 0;
}
