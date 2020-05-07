#include <stdio.h>
#include <stdlib.h>

void stringrev(char *);
int stringsize(char *);

int main()
{
    char c[99];

    printf("Enter String to Reverse\n");
    gets(c);

    stringrev(c);
    printf("%s\n",c);
    return 0;
}

void stringrev(char *x)
{
    int i=0,j;
    char y;
    j=stringsize(x);
    j=j-1;
    while(i<=j)
    {
        y=*(x+i);
        *(x+i)=*(x+j);
        *(x+j)=y;
        i++;
        j--;
    }
}

int stringsize(char*a)
{
    int l=0;
    while(*a!='\0')
    {
        l++;
        a++;
    }
    return(l);
}
