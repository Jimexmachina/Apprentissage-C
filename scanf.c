/*LIRE LES DONNÉES AU CLAVIER*/

// FAIRE GAFFE A L'UTILISATION DE SCANF
// 1- OUBLIER "/n"
// 2- Mettre un espace dans les doubles quotes " %c" (pour les lettre)
#include <stdio.h>

int main(void)

{
    //---------------------- EXEMPLE 1
    int ageUtilsateur = 0;

    printf("Quel âge avez-vous? \n");

    // & = Stock la variable dans la mémoire
    scanf("%d", &ageUtilsateur);

    printf("OK, vous avez %d ans \n", ageUtilsateur);

    //--------------------------------- EXEMPLE 2

    signed char lettre = 'A';

    printf("Choisissez une lettre de l'alphabet  \n");

    scanf(" %c", &lettre);

    printf("Vous avez choisis la lettre %c\n", lettre);

    return 0;
}
