#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;

    printf("Enter a number either 1 or 0\n");
    scanf("%d",&a);

    if(a==1)
    {
        printf("Welcome!!\n");
    }
    if(a==0)
    {
        printf("GO AWAY!!\n");
        printf("Just a JOKE!!\n");
    }
    return 0;
}
