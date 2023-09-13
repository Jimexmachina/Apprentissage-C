#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // Game loop
    while (1)
    {
        int max_height = 0;      // Hauteur maximale
        int target_mountain = 0; // Indice de la montagne à cibler

        // Lire les hauteurs des montagnes et trouver la plus haute
        for (int i = 0; i < 8; i++)
        {
            int mountain_h;
            scanf("%d", &mountain_h);

            if (mountain_h > max_height)
            {
                max_height = mountain_h;
                target_mountain = i;
            }
        }

        // Imprimer l'indice de la montagne à cibler
        printf("%d\n", target_mountain);
    }

    return 0;
}
