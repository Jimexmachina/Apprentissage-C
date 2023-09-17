#include <stdio.h>

int main(void)
{
    int age = -1;

    if (age >= 0 && age <= 100)
    {
        printf("Tu es en vie");
    }
    else if (age < 0)
    {
        printf("Tu n'es pas encore née");
    }
    else
    {
        printf("Tu es décédé");
    }

    return 0;
}
