#include <stdio.h>
#include <stdlib.h>

#define PI 3.14

void areaperi(int, float *, float *);
int main()
{
    int r;
    float area, perimeter;

    printf("Enter the radius of circle\n");
    scanf("%d",&r);
    areaperi(r,&area,&perimeter);
    printf("Area of circle with radius %d is %f\n",r,area);
    printf("Perimeter of circle with radius %d is %f",r,perimeter);

    return 0;
}

void areaperi(int x, float *a, float *p)
{
    *a = PI*x*x;
    *p = 2*PI*x;
}
