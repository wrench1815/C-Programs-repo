#include <stdio.h>
#include <stdlib.h>

void showbits(unsigned char);

int main()
{
	unsigned char num = 225, i, k;
	printf("\nDecimal %d is same as Binary ", num);
	showbits(num);

	for (i = 0; i <= 5; i++)
	{
		k = num >> i;
		printf("\n%d right Shift %d gives ", num, i);
		showbits(k);
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
