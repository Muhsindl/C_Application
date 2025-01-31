#include <stdio.h>

int arkadasSayi(int n); // Fonksiyonun declare edilmesi

int main() {
    int sayi1, sayi2, sayi1Ark, sayi2Ark;

    // Kullanıcıdan birinci sayının alınması
    printf("1. Sayıyı giriniz: ");
    scanf("%d", &sayi1);

    // Kullanıcıdan ikinci sayının alınması
    printf("2. Sayıyı giriniz: ");
    scanf("%d", &sayi2);

    // Arkadaş sayıların hesaplanması
    sayi1Ark = arkadasSayi(sayi1);
    sayi2Ark = arkadasSayi(sayi2);

    // Arkadaş sayıların kontrolü ve ekrana yazdırılması
    if (sayi1Ark == sayi2 && sayi2Ark == sayi1) { 
        printf("%d ve %d arkadaş sayılardır.\n", sayi1, sayi2);
    } else {
        printf("%d ve %d arkadaş sayı değildir.\n", sayi1, sayi2);
    }

    return 0;
}

// Arkadaş sayıları hesaplayan fonksiyon
int arkadasSayi(int n) {
    int toplam = 0;
    for (int i = 1; i < n; i++) { 
        if (n % i == 0) {
            toplam += i;
        }
    }
    return toplam;
}
