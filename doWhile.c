// Demander à l’utilisateur de saisir des notes(entre 0 et 20)
// Expliquer qu’une valeur hors de cet intervalle arrêtera la saisie.

//  Compter les notes saisies.Une fois la saisie terminée,
//  Afficher le nombre de notes saisies.

#include <stdio.h>

int main(void)
{
    float notes = 0;
    int nbreNotes = 0;
    float sommeNotes = 0;
    float moyenneNotes = 0;

    printf("Saisissez les notes, pour arréter la saisie, rentrez une note hors de l'interval (0 à 20) ");

    do
    {

        scanf("%f/n", &notes);
        sommeNotes += notes;
        nbreNotes += 1;

    } while (notes >= 0 && notes <= 20);

    nbreNotes -= 1;
    moyenneNotes = sommeNotes / nbreNotes;

    printf("La somme des notes est de %.2f", sommeNotes);

    return 0;
}
