#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,facto=1,nbre;
    printf("Entrer un Nombre\n");
    scanf("%d",&nbre);
    for (i=1;i<=nbre;i++){
        facto=facto*i;
    }
    printf("le nombre est %d :",facto);
    return 0;
}

/* 
###################################################################################################
#    =    =                                 =                                           ====      #                                                                        
#     =  =                                  =                                         =           #                                                             
#      =                                    =                                         =           #                                                                
#      =            =============           ======          ==============              ====      #                                                                                
################################################################################################### 
*/