#include <stdio.h>
int main()
{
    // Kullanıcıdan alınan sayıyı bir diziye atıyoruz.
    char sayi[20];
    printf("Sayı giriniz:");
    scanf("%s", sayi);

    char min = sayi[0]; // İlk karakteri min olarak başlatıyoruz.
    // Dizideki en küçük elemanı buluyoruz.
    for(int i = 1; sayi[i] != '\0'; i++) {
        if (sayi[i] < min) {
            min = sayi[i];   
        }
    }
    // Sonucu ekrana yazdırıyoruz.
    printf("En küçük karakter: %c\n", min);
    return 0;
}
