#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define ogrenci struct student

struct student {
    
    char *isim;
    char *soyisim;
    int yas;
    int kilo;
    float ortalama;
    
};

int main()
{
    
    ogrenci ahmet={"ahmet","keskin",21,78,78};
    
    printf("isim-->%s soyisim-->%s yas--> %d  kilo--> %d  ortalama--> %.1f",ahmet.isim,ahmet.soyisim,ahmet.yas,ahmet.kilo,ahmet.ortalama);
    
    
    return 0;
}