#include <stdio.h>
#include <stdlib.h>

int stringlen(char *);

int main()
{
	char arr[99];
	int len1, len2;

	printf("Enter a String to find it's length\n");
	gets(arr);

	len1 = stringlen(arr);
	len2 = stringlen("Humpty Dumpty");

	printf("String = %s Length = %d\n", arr, len1);
	printf("String = %s Length = %d\n", "Humpty Dumpty", len2);

	return 0;
}

int stringlen(char *s)
{
	int length = 0;

	while(*s != '\0')
	{
		length++;
		s++;
	}
	return(length);
}
