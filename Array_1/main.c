#include <stdio.h>
#include <stdlib.h>

int main()
{
    int avg, sum =0;
    int i;
    int marks[30];

    for(i=0;i<=29;i++)
    {
        printf("Enter Marks\n");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<=29;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/30;
    printf("Average Marks = %d\n",avg);

    return 0;
}
