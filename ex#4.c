
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Un programme qui demande un nombre
     positif non nul de départ,
      et qui calcule sa factorielle */

    int i,n,x;



      do{
        printf("veuillez entrer un nombre positif : ");
        scanf("%d",&n);
      } while(n<0) ;

       x=1;
       for(i=1;i<=n;i++)
           x=x*i;
           printf("%d!%d",n,x);






    return 0;
}
