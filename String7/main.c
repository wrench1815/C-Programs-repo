#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[]="Hello";
    char *p="Hello";
    str1="Bye";
    p="Bye";

    printf("%s %s",str1,p);
    return 0;
}
