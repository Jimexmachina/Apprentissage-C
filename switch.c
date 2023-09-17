#include <stdio.h>

int main(void)
{
    int age = 12;

    switch (age)
    {
    case 0:
        printf("age vaut 0");
        break;
    case 15:
        printf("age vaut 15");

    default:
        printf("Age ne vaut pas 0 ou 15");
        break;
    }

    return 0;
}
