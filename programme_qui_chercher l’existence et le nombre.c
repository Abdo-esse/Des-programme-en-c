#include <stdio.h>
#include <stdlib.h>

int main(){

  float t[4];

  int i,n,x,taill;

  do{
    printf("Veuillez entrer le nombre des element peut stoker:");
    scanf("%d",&taill);

  }while(taill<=0);


  printf("Veuilez entrer les nombres tu peut stocker : \n");


  for (i=0;i<taill;i++){

    printf("t[%d]= ",i+1);
    scanf("%f",&t[i]);

    }



  printf("Veuilez entrer les nombres qui peut chercher dans le tableau  : \n");

  scanf("%d",&n);


  x=0;


  for (i=0;i<taill;i++){

    if (n==t[i

        x++;
    }
}


   if(x>0)

printf("%d se trouve dans le tableau.",n);

  else{

     printf("%d ne se trouve pas dans le tableau.",n);
}

    return 0;

}
