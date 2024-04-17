#include <stdio.h>

int main() {
    int elemanSayisi, eleman, pozitifSayac = 0, negatifSayac = 0, sifirSayac = 0;
    float pozitifOran, negatifOran, oran;
    // Eleman sayısını kullanıcıdan al
    printf("Eleman Sayısını Giriniz: ");
    scanf("%d", &elemanSayisi);
    // Elemanları diziye ekle
    int dizi[elemanSayisi];
    for (int i = 0; i < elemanSayisi; i++) {
        printf("Elemanı giriniz: ");
        scanf("%d", &eleman);
        dizi[i] = eleman;
    }
    // Pozitif, negatif ve sıfır eleman sayılarını bul
    for (int i = 0; i < elemanSayisi; i++) {
        if (dizi[i] > 0) {
            pozitifSayac++;
        } else if (dizi[i] < 0) {
            negatifSayac++;
        } else {
            sifirSayac++;
        }
    }
    // Oranları hesapla
    pozitifOran = (float) pozitifSayac / elemanSayisi;
    negatifOran = (float) negatifSayac / elemanSayisi;
    oran = (float) sifirSayac / elemanSayisi;
    // Sonuçları yazdır
    printf("Pozitif Oran: %.2f\n", pozitifOran);
    printf("Negatif Oran: %.2f\n", negatifOran);
    printf("Sıfır Oran: %.2f\n", oran);
    // Programı sonlandır
    return 0;
}
