#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[99];

    printf("Enter Full Name\n");
    scanf("%[^\n]s",str);

    printf("Hello %s",str);
    return 0;
}
