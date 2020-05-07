#include <stdio.h>
#include <stdlib.h>

#if (TEST==BEST)
    printf("HELLO\n");
#else
    printf("Bye");
#endif

#define TEST a=10
#define BEST a=10

int main()
{
    int a=5;



    return 0;
}
