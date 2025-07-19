#include <stdio.h>

int main() {
    printf("Bu dosya: %s\n", __FILE__);
    printf("Bu satır: %d\n", __LINE__);
    printf("Derleme tarihi: %s\n", __DATE__);
    printf("Derleme zamanı: %s\n", __TIME__);
    printf("Fonksiyon adı: %s\n", __func__);
    
    return 0;
}
