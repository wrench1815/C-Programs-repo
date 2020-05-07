/** Let us C by Yashwant Kanetkar
 * Unit 2
 * Exercise H
 * part (a)
 * If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m, i, sum = 0, rem;

	printf("Enter a 5 Digit Number\n");
	scanf("%d", &n);

	m = n;

	for (i = 0; i < 5; i++)
	{
		rem = m % 10;
		sum = sum + rem;
		m = m / 10;
	}
	printf("Sum of %d is : %d", n, sum);
	return 0;
}
