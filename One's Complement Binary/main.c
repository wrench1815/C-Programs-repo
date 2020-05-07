#include <stdio.h>
#include <stdlib.h>

void showbits(unsigned char);

int main()
{
	unsigned char num, k;

	for (num = 0; num <= 3; num++)
	{
		printf("Decimal %d is equal to Binary ", num);
		showbits(num);
		printf("\n");

		k = ~num;
		printf("One's Complement of %d is ", num);
		showbits(k);
		printf("\n");
	}

	return 0;
}

void showbits(unsigned char n)
{
	int i;
	unsigned char j, k, andmask;

	for (i = 7; i >= 0; i--)
	{
		j = i;
		andmask = 1 << j;
		k = n & andmask;
		k == 0 ? printf("0") : printf("1");
	}
}
