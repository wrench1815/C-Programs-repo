/** Let us C by Yashwant Kanetkar
 * Unit 2
 * Exercise H
 * part (b)
 * If a five-digit number is input through the keyboard, write a program to reverse the number.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, m, rem, rev = 0, i;

	printf("Enter a five-digit Number\n");
	scanf("%d", &n);

	m = n;

	for (i = 0; i < 5; i++)
	{
		rem = m % 10;
		rev = rev * 10 + rem;
		m = m / 10;
	}
	printf("Reverse of %d is : %d\n", n, rev);

	getche(); //let the window stay for a while

	return 0;
}
