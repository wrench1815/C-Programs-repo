#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
	char buffer[1024], source[512], target[512];
	int inhandle, outhandle, bytes;

	printf("\nEnter the Name of Source File : ");
	gets(source);

	inhandle = open(source, O_RDONLY | O_BINARY);
	if (inhandle == -1)
	{
		puts("Cannot Open the File");
		exit(1);
	}

	printf("\nEnter the Name of Target File : ");
	gets(target);

	outhandle = open(target, O_CREAT | O_BINARY | O_WRONLY | S_IWRITE);
	if (outhandle == -1)
	{
		puts("Cannot Open the File");
		close(inhandle);
		exit(2);
	}

	while (1)
	{
		bytes = read(inhandle, buffer, 1024);

		if (bytes > 0)
		{
			write(outhandle, buffer, bytes);
		}
		else
		{
			break;
		}
	}
	close(inhandle);
	close(outhandle);

	return 0;
}
