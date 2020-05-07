#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FOUND 1
#define NOTFOUND 0

int main()
{
	char masterlist[6][10] =
	{
		"koka",
		"kela",
		"gangster",
		"papu",
		"pangi",
		"khoti"
	};
	int i, flag, a;
	char yourname[10];

	printf("Enter your name\n");
	gets(yourname);

	flag = NOTFOUND;

	for (i = 0; i <= 5; i++)
	{
		a = strcmp(masterlist[i], yourname);
		if (a == 0)
		{
			printf("Welcome, You can enter the Palace!\n");
			flag = FOUND;
			break;
		}
	}
	if (flag == NOTFOUND)
	{
		printf("Sorry,You are a Trespasser!\n");
	}

	return 0;
}
