#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr[5];
    int x;


    for(x=0; x<5; x++)
    {
        printf("%d\n", *(arr[x]=&x));
    }

    return 0;
}
