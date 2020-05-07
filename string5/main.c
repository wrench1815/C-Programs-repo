#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[99];

    printf("Enter your Full Name\n");
    gets(str);
    printf("Hello %s\n",str);

    return 0;
}
