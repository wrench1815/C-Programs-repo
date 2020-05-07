#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum, div, mul, sub, c, a, b;
    float rem;
    char ch;

    start:

    printf("Enter two Numbers\n");
    scanf("%d \n %d",&a,&b);

    printf("Enter the choice\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n5 for Remainder\n6 to Display all\n");
    scanf("%d",&c);

    if(c==1)
    {
        sum=a+b;
        printf("Sum of %d and %d is %d\n", a, b, sum);
    }
    else if(c==2)
    {
        sub=a-b;
        printf("Subtraction of %d and %d is %d\n",a,b,sub);
    }
    else if(c==3)
    {
        mul=a*b;
        printf("Multiplication of %d and %d is %d\n",a,b,mul);
    }
    else if(c==4)
    {
        div=a/b;
        printf("Division of %d and %d is %d\n",a,b,div);
    }
    else if(c==5)
    {
        rem=a%b;
        printf("Remainder of %d and %d is %f \n",a,b,rem);
    }
    else if(c==6)
    {
        sum=a+b;
        printf("Sum of %d and %d is %d\n", a, b, sum);

        sub=a-b;
        printf("Subtraction of %d and %d is %d\n",a,b,sub);

        mul=a*b;
        printf("Multiplication of %d and %d is %d\n",a,b,mul);

        div=a/b;
        printf("Division of %d and %d is %d\n",a,b,div);

        rem=a%b;
        printf("Remainder of %d and %d is %f\n",a,b,rem );
    }
    else
    {
        printf("Wrong Operation!!\n");
    }

    fflush(stdin);

    printf("\nDo you want to try again?\ny/n\n");
    scanf("%c",&ch);
    if(ch=='y')
    {
        goto start;
    }
    else
    {
        printf("end!!");
    }

    return 0;
}
