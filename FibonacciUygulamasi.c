#include <stdio.h>
int main()
{
    // İlk 2 basamak tanımlanır
    int i1,i2=1;
    int i3,sayi;
    // Kaça kadar yazılacağı kullanıcıdan alınır
    printf("Sayı giriniz: ");
    scanf("%d",&sayi);
    
    //Yazdırma işlemi yapılır
    for(int i=0;i<sayi;i++){
        i1=i2;
        i2=i3;
        i3=i1+i2;
        printf(" %d -",i3);
    }
    return 0;
}