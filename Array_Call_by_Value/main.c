#include <stdio.h>
#include <stdlib.h>

void display(int);

int main()
{
    int i;
    int marks[]={67,45,54,23,11,34,56};

    for(i=0;i<=6;i++)
    {
        display(marks[i]);
    }

    return 0;
}

void display(int m)
{
    printf("%d ",m);
}
