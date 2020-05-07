#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e;
    int p,s;

    printf("Enter marks of maths english, physics, chemistry and computer in sequence\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

    s=a+b+c+d+e;
    p=s/5;

    if(p>=90)
    {
        printf("%d Position!!\n",p);
    }
    else if(p>=60&&p<90)
    {
        printf("%d First Division\n",p);
    }
    else if(p>=50&&p<60)
    {
        printf("%d Second Division\n",p);
    }
    else if(p>=40&&p<50)
    {
        printf("%d Third Division\n",p);
    }
    else
    {
        printf("%d Fail\n",p);
    }
    return 0;
}
