#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[99][99], rev[99][99];
    int i, j, m, n, x, y;

    printf("Enter size for Rows : ");
    scanf("%d", &m);

    printf("Enter size for Columns : ");
    scanf("%d", &n);

    printf("\n");

    for(i=0; i<m; i++)
    {
        printf("Enter Elements for Row %d. \n", i);
        for(j=0; j<n; j++)
        {
            printf("Column %d : ", j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");

    printf("Entered Matrix is : \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    printf("Reversed Matrix is : \n");
    for(i=0, x=m-1; i<m, x>=0; i++, x--)
    {
        for(j=0, y=n-1; j<n, y>=0; j++, y--)
        {
            rev[x][y]=arr[i][j];
            printf("%d\t", rev[i][j]);
        }
        printf("\n");
    }

    return 0;
}
