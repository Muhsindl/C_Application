#include <stdio.h>
#include <math.h> // Üs alma işlemi için tanımlandı kütüphane

int main()
{
    float sayi, alinacakKok, result;
    
    // Kullanıcıdan veri alma
    printf("Sayı giriniz: ");
    scanf("%f", &sayi);
    
    printf("Alınması gereken kök değeri: ");
    scanf("%f", &alinacakKok);
    
    // Hatalı girişler için kontrol
    if (alinacakKok == 0) {
        printf("Kök değeri sıfır olamaz!\n");
        return 1; // Hatalı durumda programdan çıkış
    }
    
    // Kök hesaplama
    float kok = 1.0 / alinacakKok;
    result = pow(sayi, kok); // Üs alma işlemi
    
    // Sonucun yazdırılması
    printf("Sonuç: %.2f\n", result);
    return 0;
}
