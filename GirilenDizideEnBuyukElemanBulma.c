#include <stdio.h>
int main()
{
    // Kullanıcıdan alınan sayıyı bir diziye atıyoruz.
    char sayi[20];
    printf("Sayı giriniz:");
    scanf("%s", sayi);

    char max = sayi[0]; // İlk karakteri max olarak başlatıyoruz.
    // Dizideki en büyük elemanı buluyoruz.
    for(int i = 1; sayi[i] != '\0'; i++) {
        if (sayi[i] > max) {
            max = sayi[i];   
        }
    }
    // Sonucu ekrana yazdırıyoruz.
    printf("En büyük karakter: %c\n", max);
    return 0;
}