#include <stdio.h>

#define MAX_SIZE 100 

int main()
{
    int satir, sutun;
    int dizi[MAX_SIZE][MAX_SIZE]; 

    // Satır ve Sütun sayılarının kullanıcıdan alınması
    printf("Satır sayısı giriniz: ");
    scanf("%d", &satir);

    printf("Sütun sayısı giriniz: ");
    scanf("%d", &sutun);

    // Maximum sayıyı aşıp aşmadığının kontrol edilmesi (Max sayısı=100)
    if (satir > MAX_SIZE || sutun > MAX_SIZE) {
        printf("Hata: Maksimum boyut %dx%d'yi aşamaz!\n", MAX_SIZE, MAX_SIZE);
        return 1; // Programı hata kodu ile sonlandırıyoruz.
    }

    // Elemanların kullanıcıdan alınması
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d,%d Eleman giriniz: ", i, j);
            scanf("%d", &dizi[i][j]);
        }
    }

    // Dizinin ekrana yazdırılması
    printf("Girilen dizi:\n");
    for (int i = 0; i < satir; i++) {
        for (int j = 0; j < sutun; j++) {
            printf("%d ", dizi[i][j]);
        }
        printf("\n");
    }

    return 0;
}
