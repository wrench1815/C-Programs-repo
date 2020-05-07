#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(char *, char *);

int main()
{
	char s1[99], s2[99];
	int boolv;

	printf("Enter two Strings of same Size\n");
	gets(s1);
	gets(s2);

	boolv=compare(s1, s2);
	if(boolv==1)
	{
		printf("Strings are Same\n");
	}
	else
	{
		printf("Strings are not Same\n");
	}

	return 0;
}

int compare(char*a, char*b)
{
	int m, check = 0;

	m = strlen(a);

	while (*a != '\0')
	{
		if (*a == *b)
		{
			check++;
		}
		a++;
		b++;
	}
	if (check == m)
	{
		return(1);
		//printf("Strings are Same\n");
	}
	else
	{
		return(0);
		//printf("Strings are not Same\n");
	}
}
