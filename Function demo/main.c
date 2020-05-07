#include <stdio.h>
#include <stdlib.h>

void italy();
void brazil();
void argentina();
int main()
{
    printf("I'm in main.\n");
    italy();
    printf("I'm finally back in main.\n");

    return 0;
}
void italy()
{
    printf("I'm in Italy.\n");
    brazil();
    printf("I'm back in Italy.\n");
}
void brazil()
{
    printf("I'm in Brazil.\n");
    argentina();
}
void argentina()
{
    printf("I'm in Argentina.\n");
}
