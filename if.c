#include <stdio.h>
// Deuxième syntaxe pour les courtes conditions
// (age > 0) ? printf("tu es en vie") : printf("Tu n'es pas en vie");
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
