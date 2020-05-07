#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Enter 3 Numbers to test\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b)
    {
        if(a>c)
        {
            printf("a(%d) is greater than b(%d) and c(%d)\n",a,b,c);
        }
        else
        {
            printf("c(%d) is greater than a(%d) and b(%d)\n",c,a,b);
        }
    }
    else
    {
        if(b>c)
        {
            printf("b(%d) is greater than a(%d) and c(%d)\n",b,a,c);
        }
        else
        {
            printf("c(%d) is greater than a(%d) and b(%d)\n",c,a,b);
        }
    }
    return 0;
}
