#include <stdio.h>

int main()
{
    int sayi, sinir, katSayi;
    // Kullanıcıdan sayının alınması
    printf("Lütfen sayı giriniz: ");
    scanf("%d", &sayi);
    // Kullanıcıdan sınır değerinin alınması
    printf("Lütfen sınır değeri giriniz: ");
    scanf("%d", &sinir);
    // Kullanıcıdan kat sayı değerinin alınması
    printf("Lütfen katsayı değeri giriniz: ");
    scanf("%d", &katSayi);
    
    double result;
    // Kullanıcıdan alınan sayı ve sınır değerinin karşılaştırması ve gerekli işlemlerin yapılması
    if(sayi > sinir) {
        result = katSayi * sayi;
    } else if(sayi == sinir) {
        result = sayi;
    } else {
        result = (double)sayi / katSayi;
    }
    // İşlemlerin sonucunun ekrana yazdırılması
    printf("Cevap: %.2f", result);
    return 0;
}
