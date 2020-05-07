#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[99], b[99];
    int i, j, n, m, x=0;
    char c;

again:

    printf("Enter size of Array 1\n");
    scanf("%d", &n);
    printf("Enter size of Array 2\n");
    scanf("%d", &m);

    if(n==m)
    {
        printf("Enter Elements of Array 1\n");
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
        }

        printf("Enter Elements of Array 2\n");
        for(j=0; j<n; j++)
        {
            scanf("%d", &b[j]);
        }

        for(i=0, j=0; i<n, j<m; i++, j++)
        {
            if(a[i]==b[j])
            {
                printf("index = %d \nArray 1 Element = %d \tArray 2 Element =  %d \t(Elements are Same)\n", i, a[i], b[j]);
                x++;
            }
            else
            {
                printf("index = %d \nArray 1 Element = %d \tArray 2 Element =  %d \t(Elements are not Same)\n", i, a[i], b[j]);
            }
        }
        printf("\n");
        if(x==n)
        {
            printf("All %d Elements of Array 1 and Array 2 matched\n",

                   x);
            printf("Array 1 is same as Array 2\n");
        }
        else
        {
            printf("Only %d out of %d Elements of Array 1 and Array 2 matched\n",x,n);
            printf("Array 1 is not same as Array 2\n");
        }
    }
    else
    {
        printf("Array index do not match.\nTry Again?(y/n)\n");
        fflush(stdin);
        scanf("%c", &c);
        if(c=='y'||c=='Y')
        {
            goto again;
        }
        else
        {
            printf("Exited.\n");
        }
    }
    return 0;
}
