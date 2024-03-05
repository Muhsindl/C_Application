// Dizi Uygulaması(İndekse göre ekleme işlemi)
#include <stdio.h>

int main()
{
    int eklenecek_sayi, eklenecek_indeks;
    int dizi[]={1,2,3,4,6,7,8,9,0};
    int boyut=sizeof(dizi)/sizeof(dizi[0]);
    //Diziyi yazdırır
    for (int i=0;i<boyut;i++){
        printf("%d ",dizi[i]);
    }
    //Eklenecek sayıyı ve indeks değerini alırız
    printf("\nDiziye eklenecek sayıyı giriniz:");
    scanf("%d",&eklenecek_sayi);
    printf("\nDiziye eklenecek sayının indeksini giriniz:");
    scanf("%d",&eklenecek_indeks);
    //İndeksler bir yan numaraya kayar arasına ekleneceği için
    for(int i=boyut-1; i>eklenecek_indeks;i--){
        dizi[i]=dizi[i-1];
    }
    //Sayı eklemesi yapılır istenilen indekse
    dizi[eklenecek_indeks]=eklenecek_sayi;
    //Ekranda gösterilir dizi
    for(int i=0;i<boyut; i++){
        printf("%d ",dizi[i]);
    }
    return 0;
}