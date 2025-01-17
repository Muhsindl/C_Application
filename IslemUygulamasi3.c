// Formül: toplam = ∑ (x*i) / (i!)  [i=1'den sayi'ya kadar]
#include <stdio.h>
#include <math.h>
int fact(int); // Declare ediliyor fonksiyon
int main()
{
    // Kullanıcıdan sayı ve aralık alınması
    int sayi,x;
    printf("Sayı  giriniz: ");
    scanf("%d",&x);
    
    printf("Sayı sınırı giriniz: ");
    scanf("%d",&sayi);
    
    // İşlemin yapılması
    float toplam=0;
    for(int i=1;i<=sayi; i++){
        toplam+= ((x*i))/(fact(i));
    }
    printf("Cevap %f",toplam);
    return 1;
}
    // Faktöriyel hesaplama fonksiyonu
int fact(int n){
    if (n==1 || n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}