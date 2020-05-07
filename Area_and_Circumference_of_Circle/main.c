#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

int main()
{
    float area, circum, r;
    float *c;
    printf("Enter Radius of the Circle.\n");
    scanf("%f",&r);

    area=PI*r*r;
    circum=2*PI*r;

    printf("For the Given Radius %f \nArea of the circle is %f \nCircumference of the Circle is %f",r,area,circum);

    c=&area;
    printf("\n%f",c);
    return 0;
}
