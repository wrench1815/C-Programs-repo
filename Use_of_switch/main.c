#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    char c;

    again:

    printf("Enter a number to print it's corresponding Day of Week\n");
    scanf("%d",&a);

    switch(a)
    {
    case 1:
        printf("Sunday!\n");
        break;
    case 2:
        printf("Monday!\n");
        break;
    case 3:
        printf("Tuesday!\n");
        break;
    case 4:
        printf("Wednesday!\n");
        break;
    case 5:
        printf("Thursday!\n");
        break;
    case 6:
        printf("Friday!\n");
        break;
    case 7:
        printf("Saturday!\n");
        break;
    default:
        printf("Wrong Input!!");
        printf("Continue?(y/n)\n");
        fflush(stdin);
        scanf("%c",&c);
        goto again;
    }
    return 0;
}
