#include <stdio.h>
#include <stdlib.h>

#define flush fflush(stdin);

struct address
{
	char phone[99];
	char city[99];
	int pin;
};
struct employee
{
	char name[99];
	struct address a;
};

int main()
{
	struct employee e = {"koka", "0090nalagenalabe", "koka valley", 100};
	struct employee e1;

	printf("Enter data for Nested Structure Containing details of an Employee\n");
	printf("Enter Employee Name : ");
	gets(e1.name);
	flush
	printf("Enter Phone Number : ");
	gets(e1.a.phone);
	flush
	printf("Enter City : ");
	gets(e1.a.city);
	flush
	printf("Enter Pin : ");
	scanf("%d", &e1.a.pin);
	flush

	printf("Entered data of Nested Structure\n");
	printf("Name = %s\nPhone = %s\n", e.name, e.a.phone);
	printf("City = %s\nPin = %d\n", e.a.city, e.a.pin);
	printf("Name = %s\nPhone = %s\n", e1.name, e1.a.phone);
	printf("City = %s\nPin = %d\n", e1.a.city, e1.a.pin);

	return 0;
}
