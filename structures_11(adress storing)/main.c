#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)

struct employee
{
    int a;
    char ch;
    float s;
};

#pragma pack()

int main()
{
    struct employee e;
    printf("%u %u %u\n",&e.a,&e.ch,&e.s);
    return 0;
}
