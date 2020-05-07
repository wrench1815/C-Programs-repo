#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[99];

    printf("Enter your Full name\n");
    gets(str);

    puts("Hello!!");
    puts(str);
    return 0;
}
