#include <stdio.h>
#include <stdlib.h>

int main() {
    char ch;

    printf("Press any key to continue");
    getch();

    printf("\nType any character");
    ch = getche();

    printf("\nType any character");
    getchar();

    fflush(stdin);

    printf("\nContinue Y/N");
    fgetchar();

    return 0;
}
