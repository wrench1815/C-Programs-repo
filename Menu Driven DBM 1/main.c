#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>

struct
{
	char name[99];
	int age;
	float BasicSalary;
} e;

int main()
{
	FILE *fp, *ft;
	char another, choice;
	char employeeName[99];
	long int recsize;

	fp = fopen("Emp.dat", "rb+");
	if (fp == NULL)
	{
		fp = fopen("Emp.dat", "wb+");
		if (fp == NULL)
		{
			puts("Cannot Open the File");
			exit(1);
		}
	}

	recsize = sizeof(e);

	while (1)
	{
		system("cls");

		gotoxy(30, 10);
		printf("1. Add Records");
		gotoxy(30, 12);
		printf("2. List Records");
		gotoxy(30, 14);
		printf("3. Modify Records");
		gotoxy(30, 16);
		printf("4. Delete Records");
		gotoxy(30, 18);
		printf("0. Exit");
		gotoxy(30, 20);
		printf("Your Choice : ");

		fflush(stdin);
		choice = getche();
		system("cls");
		switch (choice)
		{
			case '1':
				{
					fseek(fp, 0, SEEK_END);
					another = 'y';

					while (another == 'y')
					{
						printf("\nEnter Name, Age and Basic Salary : ");
						scanf("%s %d %f", e.name, &e.age, &e.BasicSalary);
						fwrite(&e, recsize, 1, fp);

						printf("Enter Another Record(y/n) ");
						fflush(stdin);
						another = getche();
					}
					break;
				}
			case '2':
				{
					rewind(fp);

					while (fread(&e, recsize, 1, fp) == 1)
					{
						printf("\n%s %d %f", e.name, e.age, e.BasicSalary);
					}
					getch();

					break;
				}
			case '3':
				{
					another = 'y';

					while (another == 'y')
					{
						printf("\nEnter the Name of Employee to Modify his/her Record : ");
						scanf("%s", employeeName);

						rewind(fp);
						while (fread(&e, recsize, 1, fp) == 1)
						{
							if (strcmp(e.name, employeeName) == 0)
							{
								printf("\nEnter new Name, Age and Basic Salary : ");
								scanf("%s %d %f", e.name, &e.age, &e.BasicSalary);
								fseek(fp, -recsize, SEEK_CUR);
								fwrite(&e, recsize, 1, fp);
								break;
							}
						}
						printf("\nModify Another Record (y/n) ");
						fflush(stdin);
						another = getche();
					}
					break;
				}
			case '4':
				{
					another = 'y';

					while (another == 'y')
					{
						printf("\nEnter the Name of Employee to Delete his/her Record : ");
						scanf("%s", employeeName);

						ft = fopen("Temp.dat", "wb");

						rewind(fp);
						while (fread(&e, recsize, 1, fp) == 1)
						{
							if (strcmp(e.name, employeeName) != 0)
							{
								fwrite(&e, recsize, 1, ft);
							}
						}

						fclose(fp);
						fclose(ft);
						remove("Emp.dat");
						rename("Temp.dat", "Emp.dat");

						fp = fopen("Emp.dat", "rb+");

						printf("Delete Another Record (y/n) ");
						fflush(stdin);
						another = getche();
					}
					break;
				}
			case '0':
				{
					fclose(fp);
					exit(0);
				}
		}
	}

	return 0;
}
