#include <stdio.h>

int main()
{
    int sayi, fact;
    // Sayı alınması
    printf("Lütfen sayı giriniz: ");
    scanf("%d",&sayi);
    fact=1;
    //Faktöriyel hesaplama
    for (int i=1; i<sayi+1;i++){
        fact*=i;
    }
    //Kullanıcıya sonuç gösterme
    printf("%d sayısının faktöriyel sonucu = %d",sayi,fact);
    return 0;
}
