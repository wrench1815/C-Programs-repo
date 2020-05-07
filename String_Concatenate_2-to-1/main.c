/** Program Concatenating 2 strings in a 3rd empty string
 *
 * keyword 'const' used to prevent mishandling of inputted string i.e. accidentally changing of values
 * Call by Reference used didn't tested via Call by Value
 * Added '\0' (NULL) after copying of each string to master string in case user leaves one of the inputed strings empty
 *
 */


#include <stdio.h>
#include <stdlib.h>

void stringjoin(const char *, const char *, char *);  // for Joining Concatenating Strings // const initialization to prevent mishandling
int stringsize(char *);  // for finding length of strings

int main()
{
	static char s1[99];
	static char s2[99];
	static char s3[99];
	static int len1, len2, len3;

	printf("Enter String 1\n");
	gets(s1);
	printf("Enter String 2\n");
	gets(s2);

	stringjoin(s1, s2, s3);
	len1 = stringsize(s1);
	len2 = stringsize(s2);
	len3 = stringsize(s3);

	printf("String 1 : %s Length =% d\nString 2 : %s Length = %d\nConcatenated String : %s Length = %d\n", s1, len1, s2, len2, s3, len3);

	return 0;
}

void stringjoin(const char *a, const char *b, char *c)  // const initialization to prevent mishandling
{
	while (*a != '\0')
	{
		*c = *a;
		c++;
		a++;
	}
	*c = '\0';   // closing the string

	while (*b != '\0')
	{
		*c = *b;
		c++;
		b++;
	}
	*c = '\0';  // closing the string
}

int stringsize(char *x)
{
	int length = 0;
	while (*x != '\0')
	{
		length++;
		x++;
	}
	return (length);
}
