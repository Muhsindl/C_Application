#include <stdio.h>
int fact(int);
int main()
{
    int sayi, sinir, katSayi;
    
    // Kullanıcıdan sayının alınması
    printf("Lütfen sayı giriniz: ");
    scanf("%d", &sayi);
    
    // Kullanıcıdan sınır değerinin alınması
    printf("Lütfen sınır değeri giriniz: ");
    scanf("%d", &sinir);
    
    
    int result;
    // Kullanıcıdan alınan sayı ve sınır değerinin karşılaştırması ve gerekli işlemlerin yapılması
    if(sayi > sinir) {
        result = fact(sayi);
    } else if(sayi == sinir) {
        result = sayi;
    } else {
        result = sayi *sayi;
    }
    // İşlemlerin sonucunun ekrana yazdırılması
    printf("Cevap: %d", result);
    return 0;
}
// Recursive faktoriyel metodu
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        return n* fact(n-1);
    }
}
