// Formül: toplam = ∑ (x^i) / (i!)

#include <stdio.h>
#include <math.h>

int fact(int); // Declare ediyorum daha önceden tanımlıyorum fonksiyonumu
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
        toplam+= (pow(x,i))/(fact(i));
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
