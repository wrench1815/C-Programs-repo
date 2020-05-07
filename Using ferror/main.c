#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;

    fp=fopen("Source.txt","w");

    while(!feof(fp))
	{
		ch=fgetc(fp);
		if(ferror(fp))
		{
			perror("Source.txt");
			break;
		}
		else
		{
			printf("%c",ch);
		}
	}
	fclose(fp);

    return 0;
}
