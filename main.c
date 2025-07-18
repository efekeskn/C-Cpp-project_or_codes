#include <stdio.h>
#include <stdlib.h>

//fiels in c programing languahe
// sftorage of the data var is temporary such data is lost a program terminates 
// file are used for permanent retention data 
// each file and with an and of file marhes 
// when a file append a strea is a ssoriated with for

/* 
r	Okuma için bir metin dosyası açar. Dosya mevcut olmalıdır.
w	Yazma için bir metin dosyası oluşturur. Aynı isimde bir dosya zaten mevcut ise, içeriği silinir.
a	Bir metin dosyasını ekleme yapmak için açar. Dosya yok ise oluşturulur.
r+	Okuma ve yazma için bir metin dosyası açar. Dosya mevcut olmalıdır.-->1. read than write
w+	Okuma ve yazma için bir metin dosyası oluşturur.-->write  than read 
a+	Okuma ve ekleme için bir metin dosyası açar.-->doesnt matter 
rb	Okuma için bir ikili sistem dosyası açar. Dosya mevcut olmalıdır.
wb	Yazma için bir ikili sistem dosyası oluşturur. Aynı isimde bir dosya zaten mevcut ise, içeriği silinir.
ab	Bir ikili sistem dosyasını ekleme yapmak için açar. Dosya yok ise oluşturulur.
r+b	Okuma ve yazma için bir ikili sistem dosyası açar. Dosya mevcut olmalıdır.
w+b	Okuma ve yazma için bir ikili sistem dosyası oluşturur.
a+b	Okuma ve ekleme için bir ikili sistem dosyası açar.*/
    

int main()
{
    FILE *fp;
    if((fp=fopen("file.txt","a"))==NULL)
        printf("dosya açıldı");
    
    while(!feof(fp)){// EOF ne işe yaaraar
    
        printf("%c",*fp);
        break;}
        
    FILE *fp1;
    
        
    
    exit (1);
    return 0;
}