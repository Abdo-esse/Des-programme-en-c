
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    /*Un programme qui calcule et
    affiche la somme : 𝑆 = 1+10+100+…+10^𝑛 */
     int n,i,s;
     printf("Veuillez entrer un nombre :");
     scanf("%d",&n);
     s=0;


     for (i=0;i<=n;i++)
        s= s+pow(10,i);
       printf("%d ",s);


    return 0;
}
