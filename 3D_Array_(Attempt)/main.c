#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[4][4][4];
    int i,j,k;

    printf("Enter elements in 3D Array :\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                scanf("%d",&a[i][j][k]);
            }
        }
    }

    printf("Entered Elements in 3D Array : \n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d\t",a[i][j][k]);
            }
            //printf("\n");
        }
        printf("\n");
    }
    return 0;
}
