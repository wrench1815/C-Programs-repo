#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[26],temp;
    num[0]=100;
    num[25]=200;
    temp=num[25];
    num[25]=num[0];
    num[0]=temp;

    printf("%d %d\n",num[0], num[25]);

    return 0;
}
