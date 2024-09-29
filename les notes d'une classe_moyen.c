#include <stdio.h>
#include <stdlib.h>

int main()
{


    float t[10000];

    int i,taill,x;

    float v,m;


    do{
        printf("Veuillez entrer le nombre des etudiants : ");

        scanf("%d",&taill);

    }while(taill<=0);


    printf("Veuilez entrer la note de chaque etudiant : \n");

    m=0;

    for (i=0;i<taill;i++){

         printf("etudiant[%d]= ",i+1);

        scanf("%f",&t[i]);

        m=m+t[i];
    }


    v=m/taill;

    printf("La moyen est %.2f \n",v);


    x=0;
    for (i=0;i<taill;i++){

        if (v<t[i]){

           x=x+1;
           }
        }

          printf("le nombre des notes superieur a %.2f est %d",v,x);
   return 0;
}





