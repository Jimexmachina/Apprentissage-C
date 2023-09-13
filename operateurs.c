// OPERATEURS

#include <stdio.h>

int main(void)

{
    /*
    + (addition)
    - (soustraction)
    * (multiplication)
    / (division) -> 5/2 =2
    % (modulo) > 5 % 2 = 1
    */

    int addition = 0;
    int soustraction = 0;
    int multiplication = 0;
    int division = 0;
    int modulo = 0;

    addition = addition + 1;
    // ou
    addition += 1;
    // ou (que pour ajouter 1)
    addition++;

    soustraction = soustraction + 1;
    // ou
    soustraction -= 1;
    // ou (que pour ajouter 1)
    soustraction--;

    multiplication = multiplication + 1;
    // ou
    multiplication *= 1;

    division = division + 1;
    // ou
    division /= 1;

    modulo = modulo + 1;
    // ou
    modulo %= 1;

    return 0;
}
