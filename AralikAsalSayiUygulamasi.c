#include <stdio.h>

int main()
{
    // Kullanıcıdan alt ve üst limit değerlerinin alınması
    int altLimit, ustLimit, sayac;
    printf("Alt limit giriniz: ");
    scanf("%d",&altLimit);
    
    printf("Üst limit giriniz: ");
    scanf("%d",&ustLimit);
    
    // En küçük asal sayı 2 olduğu için daha küçük değerlere izin verilmemesi
    if(altLimit>2 && ustLimit>2){
        // Hesaplamanın yapılması
        for(int i=altLimit; i<ustLimit; i++){
            sayac=0;
            for(int j=2; j<i;j++){
                if(i%j==0){
                    sayac++;
                }
            }
            // Sayımız asal ise ekrana yazdırılması
            if(sayac==0){
                printf("%d ",i);
            }
            
        }
    }
    // 2 den daha küçük bir değer girilmesi durumunda uyarı verilmesi
    else{
        printf("En küçük asal sayı 2'dir");
    }
    return 0;
}
