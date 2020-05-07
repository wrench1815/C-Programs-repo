#include <stdio.h>
#include <stdlib.h>

#define FOUND printf("The Yankee Doodle Virus\n");

int main()
{
    char s;

    printf("Enter a sign (y/n)\n");
    scanf("%c",&s);
    if(s=='y')
    {
        FOUND
    }
    else
    {
        printf("Safe...as yet !\n");
    }

    return 0;
}
