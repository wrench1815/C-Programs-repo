#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, i, s, f;

    printf("Enter the Range in which you want to find Prime Numbers. \n");
    scanf("%d %d",&s,&f);
    printf("Prime Numbers between %d to %d are \n",s,f);

    num = s;

    while(num<=f)
    {

        i = 2;

        while(i<=num-1)
        {
            if(num%i==0)
            {
                printf("%d is not a Prime Number. \n",num);
                break;
            }
            i++;
        }
        if(i==num)
        {
            printf("%d is a Prime Number. \n",num);
        }
        num++;
    }
    return 0;
}
