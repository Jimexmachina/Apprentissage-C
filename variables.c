/*https://home.csulb.edu/~wmartinz/sites/default/files/images/jan00-03.JPG*/
#include <stdio.o>

int main(void)
{
  /*
  %d = int
  %f = float
  %c = char (déconseillé)
  %s = chaîne de caractères (texte)
  */

  float prix = 10.00;
  const int tva = 20;
  int prix2 = 8;
  float prix3 = 6.00;
  

  printf("Le prix d'un paquet de cigarette est de %.2f, parce que la tva est de %d sinon le paquet serait à %d. Avant il était à %f /n", prix, tva, prix2, prix3);

  return 0;
}
