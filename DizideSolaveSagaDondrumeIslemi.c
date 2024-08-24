#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, k;
    bool direction;

    printf("Kaçıncı basamaktan bölünsün: ");
    scanf("%d", &k);

    printf("Sağ'dan bölmek için = 0 \t sol'dan bölmek için = 1 giriniz: ");
    scanf("%d", (int*)&direction);

    printf("Kaç elemanlı dizi: ");
    scanf("%d", &n);
    
    int dizi[n];
    int eleman;
    
    for (int i = 0; i < n; i++) {
        printf("%d nci elemanı giriniz: ", (i + 1));
        scanf("%d", &eleman);
        dizi[i] = eleman;
    }

    /*  Döndürme işlemi  */
    if (direction == 0 || direction == 1) {
        if (direction == 1) {  // Sola döndürme
            for (int i = k; i < n; i++) {
                printf("%d ", dizi[i]);
            }
            for (int j = 0; j < k; j++) {
                printf("%d ", dizi[j]);
            }
        } else {  // Sağa döndürme
            for (int i = n - k; i < n; i++) {
                printf("%d ", dizi[i]);
            }
            for (int j = 0; j < n - k; j++) {
                printf("%d ", dizi[j]);
            }
        }
    } else {
        printf("Sağ veya sol olduğu anlaşılamadı, geçersiz sayı!!!\n");
    }

    return 0;
}
