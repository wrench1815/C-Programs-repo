#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first, second, third, n, x;
    first = 0;
    second = 1;
    printf("Enter the number of Elements to which you want to see Fibonacci series \n");
    scanf("%d",&n);
    printf("Fibonacci Series to %d elements is \n%d %d",n,first,second);
    x=2;
    while(x<=n)
    {
        third = first+second;
        printf(" %d",third);
        first=second;
        second=third;
        x++;
    }
    return 0;
}
