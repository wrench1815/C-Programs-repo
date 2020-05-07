#include <stdio.h>
#include <stdlib.h>

void display(int *);
void show(int **);

int main()
{
    int i;
    int marks[]={23,34,45,53,12,89};

    for(i=0;i<=5;i++)
    {
        display(&marks[i]);
    }

    return 0;
}

void display(int *n)
{
    show(&n);
}

void show(int **m)
{
    printf("%d ",**m);
}
