// Kullanıcıdan alt ve üst sınırı alıp aralık kadar saydırıp toplamını bulan program
#include <stdio.h>

int main()
{
    int aralik,altSayi,ustSayi;
    // Kullanıcıdan alt sınırı alıyoruz
    printf("Alt sınır sayısı giriniz: ");
    scanf("%d",&altSayi);
    // Kullanıcıdan üst sınırı alıyoruz
    printf("Üst sınır sayısı giriniz: ");
    scanf("%d",&ustSayi);
    // Kullanıcıdan kaçar kaçar saydıracağını alıyoruz
    printf("Kaçarlı saydıracaksınız giriniz: ");
    scanf("%d",&aralik);    

    int toplam=0;
    // Alt sınır üst sınırdan küçük olmalı
    if(ustSayi>=altSayi){
        for (int i=altSayi;i<=ustSayi;i+=aralik){
                toplam+=i;
        }
        printf("Toplam Sonucu: %d",toplam);
    }else{
        printf("HATA!!! (Alt sınır üst sınırdan küçük olmalı) ");
    }
    
    return 0;
}
