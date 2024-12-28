#include <stdio.h>

// Fonksiyon tanımı yapılmıştır
int artikYılFonk(int yil);

int main()
{
    // Kullanıcıdan alt ve üst limit girilmesi
    int altLimit, ustLimit;
    printf("Yıl aralığı başlangıcı giriniz: ");
    scanf("%d", &altLimit);
    
    printf("Yıl aralığı üst sınırı giriniz: ");
    scanf("%d", &ustLimit);
    
    // artikYılFonk() fonksiyonuna gönderilen değerler ile hesaplamaları ekrana yazdırır
    if(ustLimit>altLimit & (ustLimit!=0 || altLimit!=0)){
            for (int i = altLimit; i <= ustLimit; i++) {
        if (artikYılFonk(i) == 1) {
            printf("%d ", i);
        }
    }
    }else{
        printf("Lütfen ust limiti alt limitden yüksek giriniz veya yanlış yıl sayısı girmeyiniz");
    }
    return 0;
}

// Artık yıl hesaplaması yapar
int artikYılFonk(int yil) {
    // Doğru artık yıl kontrolü
    if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}
