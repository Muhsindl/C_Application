#include <stdio.h>
int main()
{
    int eleman, elemanSayisi;
    float ortalama;
    // Eleman sayısını kullanıcıdan alıyoruz
    printf("Eleman Sayısı giriniz: ");
    scanf("%d",&elemanSayisi);
    int dizi[elemanSayisi];
    int toplam=0;
    // Dizi elemanlarını kullanıcıdan alıyoruz
    for(int i=0;i<elemanSayisi;i++){
        printf("Eleman giriniz: ");
        scanf("%d",&dizi[i]);
        toplam+=dizi[i];
    }
    // Dizi elemanlarının toplamını ve ortalamasını hesaplıyoruz
    ortalama=toplam/(sizeof(dizi)/sizeof(dizi[0]));
    // Sonuçları ekrana yazdırıyoruz
    printf("Toplam: %d ",toplam);
    printf("\nOrtalama: %.2f ",ortalama);
    // Programın sonlandığını belirtiyoruz
    return 0;
}
