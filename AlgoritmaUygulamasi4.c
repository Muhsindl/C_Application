#include <stdio.h>
// 1 - 2/2! + 3 - 4/4! ...
int fact(int); 

int main()
{
    int sayi;
    double toplam = 0;
    
    // Kullanıcıdan sayı alınması
    printf("Lütfen sayı giriniz: ");
    scanf("%d", &sayi);  
    
    // Döngü, sayıya kadar olan her sayıyı işler
    for(int i = 0; i < sayi; i++){
        if(i % 2 == 0){
            // Eğer i çiftse, sayıyı direkt toplama ekliyoruz
            toplam += (double)sayi;  
        }else{
            // Eğer i tekse, sayıyı faktöriyelinin bölümüyle farkını alarak toplama ekliyoruz
            toplam -= (double)sayi / fact(i);
        }
    }

    // Sonuç ekrana yazdırılması
    printf("İşlem sonucu: %.2f\n", toplam);
    
    return 0;
}

// Faktöriyel hesaplayan fonksiyon
int fact(int n) {
    if(n == 0 || n == 1) {
        return 1;  // 0! ve 1! her ikisi de 1'dir
    } else {
        return n * fact(n - 1);  // Rekürsif faktöriyel hesaplama
    }
}
