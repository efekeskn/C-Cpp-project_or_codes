#include <stdio.h>
#include <stdlib.h>

char* intToRoman(int num) {
    // İhtiyacımız olan maksimum Roma rakamı uzunluğu tahmin edilemez,
    // bu yüzden dinamik bellek tahsis ediyoruz.
    char *rom = (char *)malloc(20 * sizeof(char));
    int i = 0;

    while (num > 0) {
        if (num >= 1000) {
            rom[i++] = 'M';
            num -= 1000;
        } else if (num >= 900) {
            rom[i++] = 'C';
            rom[i++] = 'M';
            num -= 900;
        } else if (num >= 500) {
            rom[i++] = 'D';
            num -= 500;
        } else if (num >= 400) {
            rom[i++] = 'C';
            rom[i++] = 'D';
            num -= 400;
        } else if (num >= 100) {
            rom[i++] = 'C';
            num -= 100;
        } else if (num >= 90) {
            rom[i++] = 'X';
            rom[i++] = 'C';
            num -= 90;
        } else if (num >= 50) {
            rom[i++] = 'L';
            num -= 50;
        } else if (num >= 40) {
            rom[i++] = 'X';
            rom[i++] = 'L';
            num -= 40;
        } else if (num >= 10) {
            rom[i++] = 'X';
            num -= 10;
        } else if (num >= 9) {
            rom[i++] = 'I';
            rom[i++] = 'X';
            num -= 9;
        } else if (num >= 5) {
            rom[i++] = 'V';
            num -= 5;
        } else if (num >= 4) {
            rom[i++] = 'I';
            rom[i++] = 'V';
            num -= 4;
        } else if (num >= 1) {
            rom[i++] = 'I';
            num -= 1;
        }
    }
    // Sonlandırıcı karakter ekleyelim
    rom[i] = '\0';
    return rom;
}

int main() {
    int num;
    printf("Bir tamsayi girin: ");
    scanf("%d", &num);
    char *roman = intToRoman(num);
    printf("Roma rakami: %s\n", roman);
    // Belleği serbest bırakalım
    free(roman);
    return 0;
}
