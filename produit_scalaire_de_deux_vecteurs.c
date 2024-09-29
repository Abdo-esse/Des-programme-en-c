#include <stdio.h>
#include <stdlib.h>

int main(){
   float u[3];
   float v[3];
   int i;
   float s;

   printf("Veuillez entrer les coordonee du vecteur U [x,y,z]: \n");
   for (i=0;i<3;i++){
    printf("t[%d]= ",i+1);
    scanf("%f",&u[i]);
   }
    printf("Veuillez entrer les coordonee du vecteur V [x,y,z]: \n");
   for (i=0;i<3;i++){
    printf("t[%d]= ",i+1);
    scanf("%f",&v[i]);
   }
   s=0;
   for (i=0;i<3;i++){
    s=s+v[i]*u[i];
   }
   printf("le produit scalair des deux vecteur : %f",s);




    return 0;

}
