#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;

    printf("Enter the Character\n");
    scanf("%c",&ch);

    if(ch>='A'&&ch<='Z'||ch>='a'&&ch<='z')
    {
        printf("Entered Character is an Alphabet (%c)\n",ch);
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("Entered Character is an Integer (%c)\n",ch);
    }
    else
    {
        printf("Entered Character is a Special Character (%c)\n",ch);
    }
    return 0;
}
