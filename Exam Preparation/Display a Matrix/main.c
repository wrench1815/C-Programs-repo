#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[99][99],i,j,m,n;

    printf("Enter size for rows and columns\n");
    scanf("%d %d",&m,&n);

    printf("Enter Matrix Elements\n");
    for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Elements of Matrix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
    return 0;
}
