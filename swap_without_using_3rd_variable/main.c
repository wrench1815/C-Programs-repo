#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    printf("Enter 2 numbers\n");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped numbers are %d %d \n", a, b);

    return 0;
}
