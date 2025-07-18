#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
fprintf(): Dosyaya biçimlendirilmiş veri yazmak için kullanılır.    
    int fprintf(FILE *stream, const char *format, ...) şeklinde kullanılır.
fscanf(): Dosyadan biçimlendirilmiş veri okumak için kullanılır.
    int fscanf(FILE *stream, const char *format, ...) şeklinde kullanılır.
fgetc(): Dosyadan bir karakter okumak için kullanılır. 
    int fgetc(FILE *stream) şeklinde kullanılır.
fputc(): Dosyaya bir karakter yazmak için kullanılır. 
    int fputc(int character, FILE *stream) şeklinde kullanılır.
fgets(): Dosyadan bir satır okumak için kullanılır. 
    char *fgets(char *str, int n, FILE *stream) şeklinde kullanılır.
fputs(): Dosyaya bir satır yazmak için kullanılır. 
    int fputs(const char *str, FILE *stream) şeklinde kullanılır.
*/


int main()
{
    FILE* fptr=fopen("efe.txt","r");
    
    int max=0;
    char num[20];
    
    
    while(fscanf(fptr, "%s", num) != EOF)
    {
        int a=atoi(num);
        if(a>max)
            max=a;
        
    }
    printf("%d",max);
    
}