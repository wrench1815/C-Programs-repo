#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int p, t;
	float r, amt, ci;

	printf("Enter Principal Amount\n");
	scanf("%d", &p);
	printf("Enter Time\n");
	scanf("%d", &t);
	printf("Enter Rate of Interest\n");
	scanf("%f", &r);

	amt = p * pow((1 + r / 100), t);
	ci = amt - p;

	printf("Compound Interest : %7.2f\n", ci);
	printf("Total Amount : %7.2f\n", amt);

	return 0;
}
