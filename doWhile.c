// DO WHILE
#include <stdio.h>

int main(void)
{
    int x = 0;
    int y = 15;
// Expression (do).
    do
    {
        x++;
        printf("%d \n", x);

    //L'instruction est répété tant que la condition n'est pas TRUE (while)
    } while (x < y);

    return 0;
}
