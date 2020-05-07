#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;

	fp = fopen("TestFile.c", "r");   /**< Opening 1st File */

	if (fp == '\0')
	{
		printf("File does not exist\n");
		exit(1);
	}
	else
	{
		printf("Contents of File 1\n\n");

		while (1)
		{
			ch = fgetc(fp);

			if (ch == EOF)
			{
				break;
			}
			printf("%c", ch);
		}
		printf("\n");

		fclose(fp);   /**< Closing 1st File */

		fp = fopen("TextFile.txt", "r");  /**< Opening 2nd File */

		if (fp == '\0')
		{
			printf("File does not exist\n");
			exit(1);
		}
		else
		{
			printf("Contents of File 2\n\n");

			while (1)
			{
				ch = fgetc(fp);

				if (ch == EOF)
				{
					break;
				}
				printf("%c", ch);
			}
			printf("\n");

			fclose(fp);   /**< Closing 2nd File */
		}
	}

	return 0;
}

