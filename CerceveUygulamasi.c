#include <stdio.h>

int main() {
    int sutun, satir;

    // Kullanıcıdan sütun ve satır sayısı alınması
    printf("Sütun sayısını giriniz: ");
    scanf("%d", &sutun);
    
    printf("Satır sayısını giriniz: ");
    scanf("%d", &satir);

    // Üst kenar çizgisi
    for (int i = 0; i < sutun; i++) {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < satir - 2; i++) {
        printf("*"); 
        for (int j = 0; j < sutun - 2; j++) {
            printf(" "); 
        }
        printf("*\n"); 
    }

    // Alt kenar çizgisi
    if (satir > 1) {
        for (int i = 0; i < sutun; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
