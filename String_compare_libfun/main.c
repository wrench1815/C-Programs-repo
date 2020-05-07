#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s1[] = "Jerry";
	char s2[] = "Ferry";
	int i, j, k;

	i = strcmp(s1, "Jerry");
	j = strcmp(s1, s2);
	k = strcmp(s1, "Jerry Boy");
	printf("%d\n%d\n%d\n", i, j, k);

	return 0;
}
