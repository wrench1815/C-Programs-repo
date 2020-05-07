#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float x;

    printf("Enter a Number : ");
    scanf("%d",&a);
    printf("Enter a Decimal Number : ");
    scanf("%f",&x);
    printf("Entered Number is : %-10d%d\n",a,a);
    printf("Entered Decimal Number : %2.2f %4.2f\n",x,x);

    return 0;
}
