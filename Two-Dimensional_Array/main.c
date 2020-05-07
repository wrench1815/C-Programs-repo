#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Roll no and Marks of a Student
    int stud[4][2];
    int i;

    for(i=0; i<=3; i++)
    {
        printf("Enter ROll no and Marks\n");
        scanf("%d %d", &stud[i][0], &stud[i][1]);
    }

    for(i=0; i<=3; i++)
    {
        printf("%d %d\n", stud[i][0], stud[i][1]);
    }
    return 0;
}
