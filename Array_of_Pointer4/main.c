#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr[5][5];
    int x, y,m,n;

    printf("Enter Size for Rows\n");
    scanf("%d",&m);
    printf("Enter Size for Columns\n");
    scanf("%d",&n);

    for(x=0;x<m;x++)
    {
        for(y=0;y<n;y++)
        {
            scanf("%d",&arr[x][y]);
        }
    }

    for(x=0;x<m;x++)
    {
        for(y=0;y<n;y++)
        {
            arr[x][y]=&arr[x][y];
        }
    }

    printf("Values : \n");
    for(x=0; x<m; x++)
    {
        for(y=0;y<n;y++)
        {
            printf("%d\t", (arr[x][y]));
        }
        printf("\n");
    }

    return 0;
}
