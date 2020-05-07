#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=4, *j, *k;

    printf("%d %u %u\n",i, j, k);

    j=&i;
    printf("%d %u\n",j, j);

    j=j-1;
    printf("%d %u\n", j, j);

    j=j-9;
    printf("%d %u\n",j,j);

    k=j-3;
    printf("%d %u\n",k,k);

    return 0;
}
