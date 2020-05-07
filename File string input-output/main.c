#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *f;
	char ch[99];

	f = fopen("File1.txt", "w");
	if (f == NULL)
	{
		puts("File cannot be Opened");
		exit(1);
	}

	printf("Enter Lines of Text to add them to the file\n");
	while (strlen(gets(ch)) > 0)
	{
		fputs(ch, f);
		fputs("\n", f);
	}
	fclose(f);

	f = fopen("File1.txt", "r");

	printf("Data on File :\n");

	while (fgets(ch, 98, f) != NULL)
	{
		printf("%s", ch);
	}
	printf("\n");

	fclose(f);

	return 0;
}
