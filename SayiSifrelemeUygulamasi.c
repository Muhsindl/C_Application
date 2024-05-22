#include <stdio.h>
// hesap fonksiyonu tanımlanıyor bu fonksiyon sayi1 ve sayi2 parametrelerini alıyor ve sayi1'in sayi2'ye bölümünden kalanı döndürüyor
int hesap(int sayi1, int sayi2) {
    return sayi1 % sayi2;
}
// main fonksiyonu tanımlanıyor
int main() {
    // sayi1 ve sayi2 değişkenleri tanımlanıyor
    int sayi1, sayi2;
    printf("Şifrelenecek sayı gir: ");
    scanf("%d", &sayi1);
    
    printf("Şifre alan boyutu gir: ");
    scanf("%d", &sayi2);
    // h1 değişkeni tanımlanıyor ve hesap fonksiyonu çağrılıyor
    int h1 = hesap(sayi1, sayi2);
    printf("Yeni şifre değeri: %d", h1);
    return 0;
}
