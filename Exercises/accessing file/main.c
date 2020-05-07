#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;

	fp = fopen("test_file.c", "r");

	if (fp == '\0')
	{
		puts("Cannot open the File");
		exit(1);
	}
	else
	{
		while (1)
		{
			ch = fgetc(fp);

			if (ch == EOF)
			{
				break;
			}
			printf("%c", ch);
		}
		fclose(fp);
	}

	return 0;
}
