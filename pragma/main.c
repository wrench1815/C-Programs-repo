#include <stdio.h>
#include <stdlib.h>

void fun1();
void fun2();
void fun3();
void fun4();

#pragma startup fun1
#pragma startup fun3
#pragma startup fun4
#pragma exit fun2

int main()
{
    printf("Inside main\n");

    return 0;
}

void fun1()
{
    printf("Inside fun1\n");
}

void fun2()
{
    printf("Inside fun2\n");
}

void fun3()
{
    printf("Inside fun3\n");
}

void fun4()
{
    printf("Inside fun4\n");
}
