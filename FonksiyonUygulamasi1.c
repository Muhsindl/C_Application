#include <stdio.h>
//Factorial hesaplama fonksiyonu
int faktoriyel(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * faktoriyel(n - 1);
    }
}
//Main fonksiyonu
int main()
{
    int deger;
    float hesap = 0.0; // Değişkeni float olarak başlattık, başlangıç değeri olarak 0.0 kullandık.
    // Kullanıcıdan değer alıyoruz.
    printf("Değer giriniz: ");
    scanf("%d", &deger);
    // Değer kadar döngü oluşturup hesaplamaları yapıyoruz.
    for (int i = 0; i <= deger; i++) {
        hesap = (1.0 / faktoriyel(i)) + (float) i / faktoriyel(deger - i);
    }
    // Sonucu ekrana yazdırıyoruz.
    printf("Cevap: %f\n", hesap);
    return 0;
}
