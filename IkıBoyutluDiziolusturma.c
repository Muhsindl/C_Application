#include <stdio.h>

int main() {
    int satir, sutun, sayi;
    //Satır sayısı alınır
    printf("Satir sayisini giriniz: ");
    scanf("%d", &satir);
    //Sütun sayısı alınır
    printf("Sutun sayisini giriniz: ");
    scanf("%d", &sutun);
    //İstenilen boyutta dizi oluşturulur
    int dizi[satir][sutun];
    //Diziye eleman alınır
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("(%d,%d) ninci Eleman giriniz: ", i, j);
            scanf("%d", &sayi);
            dizi[i][j] = sayi;
        }
    }
    //Dizi ekranda gösterilir
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d ", dizi[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}