#include <stdio.h>

int main() {
    FILE *fptr = fopen("main.c" , "r");
    if (fptr != NULL) 
    {
        
        char karakter='\0';
        while (karakter != EOF) 
        {
            printf("%c",karakter);
            karakter=fgetc(fptr);
            
        }
        fclose(fptr);
    }
    return 0;
}