#include <stdio.h>

int main() {
    FILE* fptr = fopen("efe.txt", "r");
    
    if (fptr == NULL) {
        printf("Dosya açılamadı.\n");
        return 1;
    }
    
    char c;
    int count = 0;
    
    while ((c = fgetc(fptr)) != EOF) {
        if (c == ' ') {
            count++;
        }
    }
    
    printf("Boşluk karakteri sayısı: %d\n", count);
    
    fclose(fptr);

    return 0;
}
