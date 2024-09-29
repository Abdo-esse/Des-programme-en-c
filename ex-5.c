
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Un programme qui demande à l'utilisateur de taper
     un entier n, puis qui calcule la somme des carrées
     des n premiers entiers impair */

    int i,n,x,y;




        printf("veuillez entrer un nombre : ");
        scanf("%d",&n);

      x=0;
      y=1;

      for(i=1;i<=n;i++){
        x=x+ pow(y,2);
        y=y+2;
      }
      printf(" %d ",x);








    return 0;
}
