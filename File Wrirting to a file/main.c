#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    char ch;

    f=fopen("TestFile.txt", "w");

    if(f==NULL)
	{
		puts("Cannot Open File\n");
        exit(1);
	}

	while(1)
	{

	}
    return 0;
}
