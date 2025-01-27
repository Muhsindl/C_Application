#include <stdio.h>

// Formül: -1/1! + 2/2! - 3/3! + 4/4! - 5/5! + ... (n. terime kadar)

int fact(int); // Faktöriyel fonksiyonunu declare ediyoruz

int main()
{
    int aralik;
    printf("Aralık gir: ");
    scanf("%d", &aralik);

    float toplam = 0; 
    for (int i = 1; i <= aralik; i++) {
        if (i % 2 == 0) {
            toplam += (float)i / fact(i); 
        } else {
            toplam -= (float)i / fact(i); 
        }
    }

    printf("%f\n", toplam);
    return 0;
}

// Faktoriyel fonksiyonu
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
