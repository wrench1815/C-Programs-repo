#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[]="klinsman";
    char *ptr;
    ptr=name;

    while(*ptr !='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}
