#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	FILE *fs, *ft;
	char ch;

	if (argc != 3)
	{
		puts("Cannot Open the File");
		getch();
		exit(1);
	}

	fs = fopen(argv[1], "r");
	if (fs == NULL)
	{
		puts("Cannot Open the File");
		getch();
		exit(2);
	}

	ft = fopen(argv[2], "w");
	if (ft == NULL)
	{
		puts("Cannot Open the File");
		getch();
		exit(3);
	}

	while ((ch=fgetc(fs))!=EOF)
	{
		fputc(ch,ft);
	}
	fclose(fs);
	fclose(ft);

	puts("File Copy Completed Successfully");
	getch();

	return 0;
}
