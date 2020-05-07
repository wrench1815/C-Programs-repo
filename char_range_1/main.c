#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char ch;

    for(ch=0;ch<=127;ch++)
    {
        printf("%d%c\n",ch,ch);
    }

    return 0;
}
