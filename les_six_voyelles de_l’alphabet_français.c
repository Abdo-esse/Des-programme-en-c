#include <stdio.h>
#include <stdlib.h>

int main()
{
    char t[6];
    int i;
    t[0]='A';
    t[1]='E';
    t[2]='I';
    t[3]='u';
    t[4]='Y';
    t[5]='o';
    printf("Les voyellees de l'alphabet francais sont :")
      for(i=0;i<6;i++)
        printf("T[%d]=%c\n",i,t[i]);

    return 0;
}
