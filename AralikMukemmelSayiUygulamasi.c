#include <stdio.h>

int main()
{
    int altLimit, ustLimit, toplam;
    // Kullanıcıdan alt ve üst limit alınması
    printf("Alt limit gir: ");
    scanf("%d",&altLimit);
    printf("Üst limit gir: ");
    scanf("%d",&ustLimit);
    
    // Sayı Mükemmel mi diye sorgu yapılması
    for (int i = altLimit; i <= ustLimit; i++) {
        toplam = 0;
        for (int j = 1; j <= i / 2; j++) {
            if (i % j == 0) {
                toplam += j;
            }
        }
        //Mükemmel sayının ekrana yazdırılması
        if (toplam == i) {
            printf("Sayı Mükemmeldir: %d\n", i);
        }
    }
    
    return 0;
}
