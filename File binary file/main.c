#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *source, *target;
	int ch;

	source = fopen("File recording input-output to a file.exe", "rb");

	if (source == NULL)
	{
		puts("Cannot open source file");
		exit(1);
	}

	target = fopen("target.exe", "wb");

	if (target == NULL)
	{
		puts("Cannot open target files");
		exit(2);
	}

	while (1)
	{
		ch = fgetc(source);

		if (ch == EOF)
		{
			break;
		}
		else
		{
			fputc(ch, target);
		}
	}
	fclose(source);
	fclose(target);
	return 0;
}
