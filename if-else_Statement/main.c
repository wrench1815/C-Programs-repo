#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;

    printf("Enter two Numbers to test\n");
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        printf("%d is Greater than %d\n",a,b);
    }
    else
    {
        printf("%d is Greater than %d\n",b,a);
    }
    return 0;
}
