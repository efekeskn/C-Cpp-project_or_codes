#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define student struct students
//ogrenci kayit uygulaması;

struct students{
    
    char *isim;
    char *soyisim;
    int numara;
    int notu;
};

int main()
{
    int secim,ogrencisayisi=0;
    student *ptrofstudent;
    student *ptr=ptrofstudent;
    
    printf("1--> yeni kayit olustur:\n");
    printf("2--> ortalamasi en yuksek orenciyi yaz:\n");
    printf("3--> sinif ortalamasini yaz:\n");
    printf("4-->kayit guncelle:\n");
    printf("5--> cikis:\n");
    scanf("%d",&secim);
    
    switch(secim)
    {
        case 1:     
            int a;
            printf("kac ogrenci kayit edeceksiniz:");
            scanf("%d",&a);
            
            printf("%d ogrenci icin alan ayrildi:",a);
            
            for(int i=ogrencisayisi;i<a+ogrencisayisi;i++)
            {
                printf("ogrencinin ismi:");
                
                
            }
    
    }
    for(int i=0;i<ogrencisayisi;i++)
    {
        
    }
    
    
    
    return 0;
}