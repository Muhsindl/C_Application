#include <stdio.h>

int main() {
    int elemanSayisi, eleman;
    // Dizi boyutunu kullanıcıdan al
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &elemanSayisi);
    // Dizi oluştur
    int dizi[elemanSayisi];
    int pozitif = 0;
    int negatif = 0;
    // Dizi elemanlarını kullanıcıdan al
    for (int i = 0; i < elemanSayisi; i++) {
        printf("%d. elemani giriniz: ", i + 1);
        scanf("%d", &eleman);
        dizi[i] = eleman;
    }
    // Dizi içindeki pozitif ve negatif eleman sayısını bul
    for (int i = 0; i < elemanSayisi; i++) {
        if (dizi[i] > 0) {
            pozitif += 1;
        } else {
            negatif += 1;
        }
    }
    // Sonuçları ekrana yazdır
    printf("Toplam pozitif eleman sayisi: %d\n", pozitif);
    printf("Toplam negatif eleman sayisi: %d\n", negatif);
    
    return 0;
}
