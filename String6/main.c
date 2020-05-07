#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[]="Hello";
    char str1[10];

    char *p="Hello";
    char *q;

    str1=str;
    q=p;
    printf("%s %s %s %s",str,str1,p,q);
    return 0;
}
