#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, r, c = 0;
    printf("Enter a Number\n");
    scanf("%d",&n);

    for(x = 2; x<n-1;x++)
    {
        r = n%x;
        if(r == 0)
        {
            c = 1;
            break;
        }
        else
        {
            continue;
        }
    }

    if(c == 1)
    {
        printf("%d is not a Prime Number.",n);
    }
    else
    {
        printf("%d is a prime Number.",n);
    }
    return 0;
}
