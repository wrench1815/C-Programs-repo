#include <stdio.h>
#include <stdlib.h>

void display(int *, int);

int main()
{
    int num[]= {24, 34, 12, 44, 56, 17};

    display(&num[0], 6);

    return 0;
}

void display(int *j, int n)
{
    int i;

    for(i=0; i<n; i++)
    {
        printf("element = %d\n", *j);
        j++;
    }
}
