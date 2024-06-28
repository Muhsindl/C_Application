#include <stdio.h>
// Math kütüphanesini ekledik. Bu kütüphane içerisinde pow fonksiyonu bulunmaktadır.
#include <math.h>
int main()
{
    int sayi;
    float yaklasikKarekok=0;
    //Sayı alınır
    printf("Lütfen sayı giriniz: ");
    scanf("%d",&sayi);
    // Karekök hesaplanır
    yaklasikKarekok = pow(sayi, 0.5);
    // Ekranda gösterme
    printf("Yaklaşık Karekök değeri %f",yaklasikKarekok);
    return 0;
}

