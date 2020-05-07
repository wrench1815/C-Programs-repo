#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,s;
    char c;

    do
    {
        printf("Enter a Number to see if it is odd or not\n");
        scanf("%d",&a);
        s=a*a;
        printf("Square of the Number %d is %d\n",a,s);
        printf("Want to try again??(y/n)");
        fflush(stdin);
        scanf("%c",&c);
    }while(c=='y');
    return 0;
}
