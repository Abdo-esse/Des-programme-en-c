#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Un programme qui demande un nombre de départ,
     et qui ensuite affiche les dix nombres suivants en utilisant
      les boucles for, while, et do ... while. Par exemple,
      si l'utilisateur entre le nombre 33,
      le programme affichera les nombres de 34 à 43.*/
      int i,n;

      printf("Veuillez entrer un nombre: ");
      scanf("%d",&n);
     for (i=n+1;i<=n+10;i++)
        printf(" %d ",i);
    return 0;
}
