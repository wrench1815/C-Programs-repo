#include <stdio.h>
#include <stdlib.h>

int main()
{
    static int a[]={0,1,2,3,4};
    int *p[]={a,a+1,a+2,a+3,a+4};
    int i;

    for(i=0;i<5;i++)
    {
        printf("%u %u %d\n",p[i],*p[i],*(*p+i));
    }

    return 0;
}
