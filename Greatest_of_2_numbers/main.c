#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;//initialization

    printf("Enter the Numbers to check \n"); //entering the numbers asking
    scanf("%d \n %d",&a,&b); //input of numbers
    //loop starts here
    if(a>b)
    {
        printf("a (%d) is Greater than b(%d)\n",a,b);
    }
    else
    {
        printf("b (%d) is Greater than a(%d)",b,a);
    }
    //loop ends here
    return 0;
}
