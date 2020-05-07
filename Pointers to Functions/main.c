#include <stdio.h>
#include <stdlib.h>

void display();

int main()
{
    void (*func_ptr)();

    func_ptr=display;
    printf("Address of function is %u\n",func_ptr);
    func_ptr();

    return 0;
}

void display()
{
	puts("Koka Koka\n");
}
