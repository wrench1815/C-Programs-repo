#include <stdio.h>
#include <stdlib.h>

float square(float x);
float main()
{
    float a, b;

    printf("Enter a number to find it's square\n");
    scanf("%f",&a);
    b=square(a);
    printf("Square of %f is %f ",a,b);

    return 0;
}

float square(float x)
{
    float y;
    y = x*x;
    return(y);
}
