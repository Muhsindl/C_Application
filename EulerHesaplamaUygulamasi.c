#include <stdio.h>

int fact(int n); // Fonksiyon tanımı yapıldı

int main()
{
    int n;
    float hesap = 0; 
    // Kullanıcıdan değer alınıyor
    printf("Sayı giriniz: ");
    scanf("%d", &n);
    
    for(int i = 0; i <= n; i++) {
        hesap += (float)i / fact(i); 
    }
    printf("Euler Değeri: %f", hesap); 
    return 0;
}
// Faktöriyel hesaplama fonksiyonu
int fact(int n){
    if (n == 0 || n == 1){ 
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
