#include <stdio.h>
#include <stdlib.h> 

void tahminOyunu(int); // Declare ediliyor fonksiyon
int main() {
    int tahminHakki;
    
    printf("Tahmin hakkı giriniz: ");
    scanf("%d", &tahminHakki);
    tahminOyunu(tahminHakki);
    
    return 0;
}

// Tahmin oyunu fonksiyonu
void tahminOyunu(int tahminHakki) {
    int tahminEdilecekSayi = (rand() % 10) + 1; // 1 ile 10 arasında bir sayı
    int kullaniciTahmini;
    
    for (int i = 1; i <= tahminHakki; i++) {
        printf("%d. tahmini giriniz: ", i);
        scanf("%d", &kullaniciTahmini);

        if (kullaniciTahmini == tahminEdilecekSayi) {
            printf("Tebrikler, doğru tahmin ettiniz!\n");
            return; // Doğru tahmin edildiğinde oyundan çık
        } else if (kullaniciTahmini < tahminEdilecekSayi) {
            printf("Daha büyük bir sayı deneyin.\n");
        } else {
            printf("Daha küçük bir sayı deneyin.\n");
        }
    }

    printf("Maalesef doğru tahmin edemediniz. Doğru sayı %d idi.\n", tahminEdilecekSayi);
}
