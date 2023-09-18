#include <stdio.h>

// PROTOTYPE
float calculPrixTTC(float prixHT, float tva);

int main(void)
{
    float prixPCHT = 400.00;
    float tvaActuelle = 20;

    float prixTTC = calculPrixTTC(prixPCHT, tvaActuelle);
    printf("PrixTTC: %.2f E", prixTTC);
    return 0;
}

// FONCTION
float calculPrixTTC(float prixHT, float tva)
{
    float prixTTC;

    prixTTC = ((prixHT * (tva / 100)) + prixHT);

    return prixTTC;
}
