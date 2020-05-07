#include <stdio.h>
#include <stdlib.h>

union a
{
	short int i;
	char ch[2];
} key;

int main()
{
	key.i = 512;

	printf("key.i = %d\n", key.i);
	printf("key.ch[0] = %d\n", key.ch[0]);
	printf("key.ch[1] = %d\n", key.ch[1]);

	return 0;
}
