#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char *names[6];
	int len, i;
	char n[99];
	char *p;

	for (i = 0; i <= 5; i++)
	{
		printf("Enter names\n");
		gets(n);
		len = strlen(n);
		p = (char *)malloc(len + 1);
		strcpy(p, n);
		names[i] = p;
	}
	for (i = 0; i <= 5; i++)
	{
		printf("%s\n", names[i]);
	}

	return 0;
}
