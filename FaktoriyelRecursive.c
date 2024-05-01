#include <stdio.h>

// Fonksiyonun prototipi
int fonksiyon(int sayi);

int main() {
    int sayi;
    // Kullanıcıdan değer alınması
    printf("Hesaplanacak değer: ");
    scanf("%d",&sayi);
    // Fonksiyonun çağrılması ve sonucun ekrana yazdırılması
    printf("%d",fonksiyon(sayi));
}
// Fonksiyonun tanımı
int fonksiyon(int sayi) {
    if (sayi<=1){
        return 1;
    }else{
        return sayi*fonksiyon(sayi-1);
    }
    
}