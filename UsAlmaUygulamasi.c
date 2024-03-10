#include <stdio.h> 
#include <math.h> //pow() fonksiyonunu kullanabilmek için

int main() 
{
    double taban, kuvvet, sonuc;
    printf("Taban değeri giriniz: ");
    scanf("%lf",&taban); // %lf float olarak l değişkenini tutar
    
    printf("Kuvvet değeri giriniz: ");
    scanf("%lf",&kuvvet);
    
    sonuc=pow(taban,kuvvet); // math.h kütüphanesinden pow fonksiyonunu kullanır.
    
    printf("%.2lf ^ %.2lf=%.2lf",taban,kuvvet,sonuc); // Birden çok değeri yazdırabilmek için
    return 0;
}