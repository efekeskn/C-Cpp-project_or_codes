#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct ogrenci{
    char isim[20];
    char soyisim[20];
    int no;
    int notlar[3];
} ogrenci;




int main()
{
    FILE *fptr=fopen("efe.txt","r");
    ogrenci ogrenciler[3];
    int i=0;
    
    while(i<3)
    {
        fscanf(fptr,"%s%s%d%d%d%d",ogrenciler[i].isim,ogrenciler[i].soyisim,&ogrenciler[i].no,&ogrenciler[i].notlar[0],&ogrenciler[i].notlar[1],&ogrenciler[i].notlar[2]);
        i++;
        
    }
    
    for(int j=0;j<3;j++)
    {
        printf("Ad: %s\n",ogrenciler[j].isim);
        printf("SoyAd: %s\n",ogrenciler[j].soyisim);
        printf("ogrenci no:%d\n",ogrenciler[j].no);
        printf("notlar: %d  %d  %d",ogrenciler[j].notlar[0],ogrenciler[j].notlar[1],ogrenciler[j].notlar[2]);
        
        printf("\n\n\n");
    }
    
    
    
    

    return 0;
}
