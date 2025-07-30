#include <stdio.h>

int main() {
    int satir, sutun;
    printf("Lutfen matrisin satir ve sutunlarini giriniz:");
    scanf("%d%d", &satir, &sutun);

    int spiralmatris[satir][sutun];
    int sol = 0, yukari = 0, deger = 1, sag = sutun - 1, asagi = satir - 1;
    int gosterge = satir * sutun;

    while (deger <= gosterge) {
        // Saga git 
        for (int i = sol; i <= sag && deger <= gosterge; i++)
            spiralmatris[yukari][i] = deger++;
        yukari++;

        // Asagi git
        for (int i = yukari; i <= asagi && deger <= gosterge; i++)
            spiralmatris[i][sag] = deger++;
        sag--;

        // Sola git
        for (int i = sag; i >= sol && deger <= gosterge; i--)
            spiralmatris[asagi][i] = deger++;
        asagi--;

        // Yukari git
        for (int i = asagi; i >= yukari && deger <= gosterge; i--)
            spiralmatris[i][sol] = deger++;
        sol++;
    }

    // Matrisi yazdir
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d\t", spiralmatris[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}

