#include <stdio.h>
#include <stdlib.h>

int main()
{
/**< To print the number from 1 to 10 with the help of do-while loop */
    int count;

    count=0;
    do
    {
        printf("%d ",count);
        count++;
    }while(count>=10); /**< False condition */

    return 0;
}
