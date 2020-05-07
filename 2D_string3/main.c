#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *names[] =
	{
		"akshay",
		"parag",
		"raman",
		"srinivas",
		"gopal",
		"rajesh"
	};
	char *t;
	int i;

	printf("Original names : %s %s\n", names[2], names[3]);

	t = names[2];
	names[2] = names[3];
	names[3] = t;

	printf("New names : %s %s\n", names[2], names[3]);

	return 0;
}
