#include <stdio.h>
#include <stdlib.h>

typedef enum Emp_Dept
{
	Assembly, Manufacturing, Accounts, Stores
}dept;

struct Employee
{
	char name[99];
	int age;
	int BasicSalary;
	//enum Emp_Dept department;
	dept department;
} e;

int main()
{
	int n;

	printf("Enter Name of Employee : ");
	gets(e.name);
	printf("Enter Age of Employee : ");
	scanf("%d", &e.age);
	printf("Enter Basic Salary of Employee : ");
	scanf("%d", &e.BasicSalary);
	printf("( 0 - Assembly, 1 - Manufacturing, 2 - Accounts, 3 - Stores )\nEnter Department of Employee: ");
	scanf("%d", &n);

	switch (n)
	{
		case 0:
			e.department = Assembly;
			break;
		case 1:
			e.department = Manufacturing;
			break;
		case 2:
			e.department = Accounts;
			break;
		case 3:
			e.department = Stores;
			break;
	}

	printf("Name = %s\n",e.name);
	printf("Age = %d\n",e.age);
	printf("Basic Salary = %d\n",e.BasicSalary);

	switch (e.department)
	{
		case 0:
			printf("Department = Assembly\n");
			break;
		case 1:
			printf("Department = Manufacturing\n");
			break;
		case 2:
			printf("Department = Accounts\n");
			break;
		case 3:
			printf("Department = Stores\n");
			break;
	}

	if(e.department==Accounts)
	{
		printf("\n%s is an Accountant\n",e.name);
	}
	else
	{
		printf("\n%s is not an Accountant\n",e.name);
	}

	return 0;
}
