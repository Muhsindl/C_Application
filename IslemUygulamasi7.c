#include <stdio.h>

int main() {
    int n, toplam, sabit;

    // Kullanıcıdan sınır değeri alınır
    printf("Lutfen sinir degeri giriniz: ");
    scanf("%d", &n);

    // Kullanıcıdan sabit değer alınır
    printf("Lutfen sabit degeri giriniz: ");
    scanf("%d", &sabit);

    // Hesaplama: ∑ (3*i^2 + sabit)
    toplam = 0;
    for(int i = 1; i <= n; i++) {
        toplam += (3 * i * i) + sabit;
    }

    // Sonuç yazdırılır
    printf("Cevap: %d\n", toplam);

    return 0;
}
