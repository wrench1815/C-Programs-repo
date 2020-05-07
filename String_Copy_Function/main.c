#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	char source[] = "Sayonara";
	char target[99];

	strcpy(target, source);

	printf("Source String = %s\n", source);
	printf("Target String = %s\n", target);

	return 0;
}
