#include <stdio.h>

int main()
{
    int elemanSayi, eleman;
    //Eleman sayısı alınır 
    printf("Eleman sayısı giriniz: ");
    scanf("%d",&elemanSayi);
    //Alınan eleman sayısına göre dizi uzunluğu belirlenir
    int dizi[elemanSayi];
    //Oluşturulan diziye eleman ekleme işlemi yapılır
    for(int i=0; i<elemanSayi; i++){
        printf("%d.nci eleman giriniz: ",i+1);
        scanf("%d",&eleman);
        dizi[i]=eleman;
    }
    //Dizi ekrana yazdırılır
    for (int i=0; i<elemanSayi; i++){
        printf("%d nci eleman = %d\n",i,dizi[i]);
    }
    return 0;
}
