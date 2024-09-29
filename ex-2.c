
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Un programme qui calcule et
    affiche la somme : 𝑆 = 1/1+1/2+1/3+1/4+1/5+1/n*/
     int n;
     float i,s;
     printf("Veuillez entrer un nombre :");
     scanf("%d",&n);
     s=0;


     for (i=1;i<=n;i++)
        s=s+(1/i);
       printf("%.2f ",s);


    return 0;
}
