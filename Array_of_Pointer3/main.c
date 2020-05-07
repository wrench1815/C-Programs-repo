#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr[5][5];
    int x, y;


    printf("Values : \n");
    for(x=0; x<5; x++)
    {
        for(y=0;y<5;y++)
        {
            printf("%d\t", *(arr[x][y]=&x,&y));
        }
        printf("\n");
    }

    printf("Addresses : \n");
    for(x=0; x<5; x++)
    {
        for(y=0;y<5;y++)
        {
            printf("%d\t", (arr[x][y]=&x,&y));
        }
        printf("\n");
    }

    return 0;
}
