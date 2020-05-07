#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[100], i;

    for(i=0;i<=100;i++)
    {
        num[i]=i;
        printf("%d ",num[i]);
    }
    return 0;
}
