#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	while ((ch = getc(stdin)) != EOF)
	{
		putc(ch, stdout);
	}

	return 0;
}
