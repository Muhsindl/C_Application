#include <stdio.h>

int main()
{
    int elemanSayisi, eleman;
    // Eleman sayısını ve elemanları kullanıcıdan alıp diziye atama işlemleri
    printf("Eleman Sayısı giriniz: ");
    scanf("%d",&elemanSayisi);
    int dizi[elemanSayisi];
    for (int i=0; i<elemanSayisi;i++){
        printf("Eleman giriniz: ");
        scanf("%d",&eleman);
        dizi[i]=eleman;
    }
    // Dizi elemanlarını normal olarak ekrana yazdırma
    printf("Normal Dizi; \n");
    for (int i=0; i<elemanSayisi; i++){
        printf("%d ",dizi[i]);
    }
    // Dizi elemanlarını ters olarak ekrana yazdırma
    printf("\nTers Dizi; \n");
    for (int i=elemanSayisi-1; i>=0; i--){
        printf("%d ",dizi[i]);
    }
    return 0;
}
