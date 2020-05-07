/**< Reads Records from the Binary file and Displays them on Screen */
#include <stdio.h>
#include <stdlib.h>

struct emp
{
	char name[40];
	int age;
	float BasicSalary;
} e;

int main()
{
	FILE *fp;
	fp = fopen("Emp.dat", "rb");
	if (fp == NULL)
	{
		puts("Cannot Open File");
		exit(1);
	}
	while (fread(&e, sizeof(e), 1, fp) == 1)
	{
		printf("%s %d %f\n", e.name, e.age, e.BasicSalary);
	}
	fclose(fp);

	return 0;
}
