#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a=0.5;
    float w, x, y, z;

    w=sin(a);
    x=cos(a);
    y=tan(a);
    z=pow(a,2);
    printf("%f %f %f %f", w, x, y, z);

    return 0;
}
