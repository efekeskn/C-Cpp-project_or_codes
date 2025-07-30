#include <stdio.h>
#include <string.h>
#include <stdlib.h>


struct araba{
    
    char marka[20];
    char plaka[10];
    int kilometre;
    int model;
    int tekerleksayisi;
    int vitessayisi;
    
    
};


int main()
{
    struct araba  araba1= { "ferrary" , "ADN3150SR" ,300,1999,6,6};
      araba1.model=166;
      strcpy(araba1.marka,"ferrary");
    printf("  %d  %d  ", araba1.kilometre, araba1.model);
  
    
    
    
    
    return 0;
}