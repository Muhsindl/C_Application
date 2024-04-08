#include <stdio.h>
// Math kütüphanesini ekledik. Bu kütüphane içerisinde pow fonksiyonu bulunmaktadır.
#include <math.h>
int main()
{
    int sayi;
    float yaklasikKarekok=0;
    printf("Lütfen sayı giriniz: ");
    scanf("%d",&sayi);
    yaklasikKarekok = pow(sayi, 0.5);
    printf("Yaklaşık Karekök değeri %f",yaklasikKarekok);
    return 0;
}

