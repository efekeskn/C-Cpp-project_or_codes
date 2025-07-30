#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// struct yapısı c programlama
struct ogrenci
{
    char isim[15];
    char soyisim[15];
    int yas;
    int boy;
    int ıd;
};


int main()
{
    
    struct ogrenci ahmet={"ahmet","gedikli",18,178,22296577};
    
    printf("%s  %s  %d  %d    %d",ahmet.isim,ahmet.soyisim,ahmet.yas,ahmet.boy,ahmet.ıd);
    
    
    return 0;
}