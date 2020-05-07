#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	int line = 0, tab = 0, blank = 0, character = 0;
	fp = fopen("TestFile.c", "r");
	while (1)
	{
		ch = fgetc(fp);

		if (ch == EOF)
		{
			break;
		}
		character++;
		if (ch == ' ')
		{
			blank++;
		}
		if (ch == '\n')
		{
			line++;
		}
		if (ch == '\t')
		{
			tab++;
		}
	}
	fclose(fp);
	printf("Number of Characters = %d\n", character);
	printf("Number of Blanks = %d\n", blank);
	printf("Number of Tabs = %d\n", tab);
	printf("Number of Lines = %d\n", line);
	return 0;
}
