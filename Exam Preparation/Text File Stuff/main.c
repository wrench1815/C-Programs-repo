#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp;
	char ch[99];

	fp = fopen("Hello.txt", "w");
	if (fp == NULL)
	{
		puts("Cannot Open File\n");
		exit(1);
	}
	printf("Enter Few Lines of Text\n");

	while (strlen(gets(ch)) > 0)
	{
		fputs(ch, fp);
		fputs("\n", fp);
	}
	fclose(fp);

	fp=fopen("Hello.txt","r");
	if(fp==NULL)
	{
		puts("Cannot Open File");
		exit(1);
	}
	printf("Data on File\n");
	while(fgets(ch,98,fp)!=NULL)
	{
		printf("%s",ch);
	}
	fclose(fp);

	return 0;
}
