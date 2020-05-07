#include <stdio.h>
#include <stdlib.h>
#define MALE 0;
#define FEMALE 1;
#define SINGLE 0;
#define MARRIED 1;
#define DIVORCED 2;
#define WIDOWED 3;

struct employee
{
	unsigned gender : 1;
	unsigned mar_stat : 2;
	unsigned hobby : 3;
	unsigned scheme : 4;
} e;

int main()
{
	e.gender = MALE;
	e.mar_stat = MARRIED;
	e.hobby = 5;
	e.scheme = 9;

	printf("Gender = %d\n",e.gender);
	printf("Martial Status = %d\n",e.mar_stat);
	printf("Bytes Occupied by e = %d\n",sizeof(e));

	return 0;
}
