#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	printf("Enter Number 1-7 to print Corresponding day of the Week\n");
	scanf("%d", &n);

	switch (n)
	{
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("There are Only 7 Days in a Week lol\n");
			break;
	}
	return 0;
}
