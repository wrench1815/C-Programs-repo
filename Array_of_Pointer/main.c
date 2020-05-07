#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr[5];
    int i=1, j=2, k=3, l=4, m=5, x;

    arr[0]=&i;
    arr[1]=&j;
    arr[2]=&k;
    arr[3]=&l;
    arr[4]=&m;

    for(x=0; x<5; x++)
    {
        printf("%d\n", (arr[x]));
    }

    return 0;
}
