#include <stdio.h>

// Faktöriyel hesaplama fonksiyonu
int faktoriyel(int n) {
    int sonuc = 1;
    for (int i = 1; i <= n; i++) {
        sonuc *= i;
    }
    return sonuc;
}

int main() {
    int sayi, temp, basamak, toplam = 0;

    // Kullanıcıdan sayı alınması
    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    temp = sayi;

    // Basamaklarına ayrılması ve faktoriyelinin hesaplanması
    while (temp > 0) {
        basamak = temp % 10;          
        toplam += faktoriyel(basamak); 
        temp /= 10;                   
    }

    // Güçlü sayının kontrolü ve ekrana yazdırılması
    if (toplam == sayi) {
        printf("%d bir guclu sayidir.\n", sayi);
    } else {
        printf("%d bir guclu sayi degildir.\n", sayi);
    }

    return 0;
}
