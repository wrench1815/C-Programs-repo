#include <stdio.h>
#include <stdlib.h>

#define ISDIGIT(y) (y>=48&&y<=57)

int main()
{
    char ch;

    printf("Enter any digit\n");
    scanf("%c",&ch);
    if(ISDIGIT(ch))
    {
        printf("Digit\n");
    }
    else
    {
        printf("Not a Digit\n");
    }

    return 0;
}
