#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={10,20,30,40,50,60,70};
    int *i, *j;

    i=&a[1];
    j=&a[5];
    printf("%d %d\n",j-i,*j-*i);

    return 0;
}
