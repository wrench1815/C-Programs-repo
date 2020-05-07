/**< Recieves record from keyboard and writes them to a file in binary mode */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct emp
{
	char name[40];
	int age;
	float basicSalary;
} e;

int main()
{
	FILE *fp;
	char another = 'y';

	fp = fopen("Emp.dat", "wb");

	if (fp == NULL)
	{
		puts("Cannot Open File");
		exit(1);
	}

	while (another == 'y')
	{
		printf("\nEnter name, age and Basic Salary: ");
		scanf("%s %d %f", e.name, &e.age, &e.basicSalary);
		fwrite(&e, sizeof(e), 1, fp);

		printf("Add Another Record (y/n)");
		fflush(stdin);
		another = getche();
	}

	fclose(fp);

	return 0;
}
