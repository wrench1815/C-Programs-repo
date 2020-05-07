#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number to see if it is Even or Odd\n");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("%d is Even.\n",n);
    }
    else
    {
        printf("%d is Odd.\n",n);
    }
    return 0;
}
