#include <stdio.h>
#include <stdlib.h>

void stringcomp( char *, char *);
int stringsize(char*);

int main()
{
	char s1[99];
	char s2[99];
	char ch;
	int x, y;

retry:

	printf("Enter string 1\n");
	gets(s1);
	printf("Enter string 2\n");
	gets(s2);
	x = stringsize(s1);
	y = stringsize(s2);

	if (x == y)
	{
		stringcomp(s1, s2);
	}
	else
	{
		printf("String size not Same.\nRetry!(y/n)\n");
		scanf("%c",&ch);
		fflush(stdin);
		if(ch=='y'||ch=='Y')
        {
            goto retry;
        }
        else
        {
            printf("Exiting!!\n");
        }
	}

	return 0;
}

void stringcomp( char *a, char *b)
{
	int check = 0;
	int m;
	m = stringsize(b);

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
		printf("Strings are same\n");
	}
	else
	{
		printf("Strings are not same\n");
	}
}

int stringsize(char*x)
{
	int length = 0;

	while (*x != '\0')
	{
		length++;
		x++;
	}
	return (length);
}
