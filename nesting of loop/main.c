#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;

    i = 1;
    while (i <= 5) {
        j = 1;
        while (j <= i) {
            printf("%d", j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
