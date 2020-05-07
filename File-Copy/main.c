#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *sf, *tf;
	char ch;
	sf = fopen("SourceFile.c", "r");
	if (sf == '\0')
	{
		puts("Source File Cannot be Found");
		exit(1);
	}
	tf = fopen("TargetFile.c", "w+");
	if (tf == '\0')
	{
		puts("Target File Cannot be Found");
		fclose(sf);
		exit(2);
	}
	while (1)
	{
		ch = getc(sf);

		if (ch == EOF)
		{
			break;
		}
		else
		{
			fputc(ch, tf);
		}
	}
	puts("File Copied Successfully");
	fclose(sf);
	fclose(tf);

	return 0;
}
