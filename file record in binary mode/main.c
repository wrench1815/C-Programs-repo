#include <stdio.h>
#include <stdlib.h>

struct emp
{
	char name[99];
	int age;
	float salary;
} e;

int main()
{
	FILE *f;
	char another = 'y';

	f = fopen("Employee Database.dat", "wb");

	if (f == NULL)
	{
		puts("Cannot open the File");
		exit(1);
	}

	while (another == 'y')
	{
		//printf("\n");
		printf("Enter Name, Age and Salary\n");
		scanf("%s %d %f", e.name, &e.age, &e.salary);
		fwrite(&e, sizeof(e), 1, f);

		printf("Add Another Database(y/n)\n");
		fflush(stdin);
		another = getche();
		printf("\n");
	}
	fclose(f);

	f = fopen("Employee Database.dat", "rb");

	while (fread(&e, sizeof(e), 1, f) == 1)
	{
		printf("%s %d %f\n", e.name, e.age, e.salary);
	}
	fclose(f);

	return 0;
}
