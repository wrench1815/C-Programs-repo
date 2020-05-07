#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main()
{
	char buffer[1024], source[512], target[512];
	int inhandle, outhandle, bytes;

	printf("\nEnter Source File Name : ");
	gets(source);

	inhandle = open(source, O_RDONLY | O_BINARY);
	if (inhandle == -1)
	{
		puts("Cannot Open the FILe");
		exit(1);
	}
	printf("\nEnter Target File Name : ");
	gets(target);

	outhandle = open(target, O_CREAT | O_BINARY | O_WRONLY, S_IWRITE);
	if (outhandle == -1)
	{
		puts("Cannot Open File");
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
