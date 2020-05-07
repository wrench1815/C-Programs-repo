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
	char ch;

	f = fopen("Employee Database.dat", "w");
	if (f == NULL)
	{
		puts("File Cannot be Opened");
		exit(1);
	}

again:
	fflush(stdin);
	printf("Enter Name, Age and Salary of Employee\n");
	scanf("%s %d %f", e.name, &e.age, &e.salary);
	fprintf(f, "%s %d %f\n", e.name, e.age, e.salary);

	printf("Continue(Y/N)\n");
	fflush(stdin);
	scanf("%c", &ch);
	if (ch == 'y')
	{
		goto again;
	}
	fclose(f);

	f = fopen("Employee Database.dat", "r");
	while (fscanf(f, "%s %d %f", e.name, &e.age, &e.salary) != EOF)
	{
		printf("%s %d %f\n", e.name, e.age, e.salary);
	}
	fclose(f);

	return 0;
}
