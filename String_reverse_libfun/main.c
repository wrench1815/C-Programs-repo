#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char s[99];

    printf("Enter a String to Reverse\n");
    gets(s);
    strrev(s);
    printf("%s",s);

    return 0;
}
