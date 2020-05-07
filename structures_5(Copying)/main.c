#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct employee
{
	char name[99];
	int age;
	float salary;
};

int main()
{
	struct employee e1 = {"koka", 21, 8997.245};
	struct employee e2, e3;

	/**< Copying of elements from e1 to e2 element by element starts here */
	strcpy(e2.name, e1.name); /**< copying a string as name is a string */
	e2.age = e1.age;
	e2.salary = e1.salary;
	/**< Copying of elements from e1 to e2 element by element ends here */

	/**< Copying whole structure elements to another */
	e3 = e2;

	printf("%s %d %f\n", e1.name, e1.age, e1.salary);
	printf("%s %d %f\n", e2.name, e2.age, e2.salary);
	printf("%s %d %f\n", e3.name, e3.age, e3.salary);

	return 0;
}
