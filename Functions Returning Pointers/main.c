#include <stdio.h>
#include <stdlib.h>

char *scopy(char *, char *);

int main()
{
	char *str;
	char source[] = "Koka";
	char target[10];

	str = scopy(target, source);
	printf("%s\n", str);

	return 0;
}

char *scopy(char *t, char *s)
{
	char *r;
	r = t;

	while (*s != '\0')
	{
		*t = *s;
		t++;
		s++;
	}
	*t='\0';
	return(r);
}
