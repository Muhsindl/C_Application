#include <stdio.h>
#include <math.h>
#include <complex.h>  // Karmaşık sayılar için

int main() {
    // a, b, c değerlerini kullanıcıdan al
    double a, b, c;
    printf("a değerini giriniz: ");
    scanf("%lf", &a);
    printf("b değerini giriniz: ");
    scanf("%lf", &b);
    printf("c değerini giriniz: ");
    scanf("%lf", &c);

    // a = 0 durumunu kontrol et (ikinci derece denklem olmalı)
    if (a == 0) {
        printf("Hata: 'a' değeri 0 olamaz, ikinci derece denklem için a ≠ 0 olmalıdır.\n");
    } else {
        // Diskriminantı hesapla
        double discriminant = (b * b) - (4 * a * c);

        // Gerçek kökler
        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Gerçek kökler:\n");
            printf("Kök 1: %.2lf \n", root1);
            printf("Kök 2: %.2lf \n", root2);
        }
        // Çift katlı kök (Aynı iki kök)
        else if (discriminant == 0) {
            double root = -b / (2 * a);
            printf("Çift katlı kök: %.2lf \n", root);
        }
        // Karmaşık kökler
        else {
            double complex root1 = (-b + csqrt(discriminant)) / (2 * a);
            double complex root2 = (-b - csqrt(discriminant)) / (2 * a);
            printf("Karmaşık kökler:\n");
            printf("Kök 1: %.2f + %.2fi \n", creal(root1), cimag(root1));
            printf("Kök 2: %.2f + %.2fi \n", creal(root2), cimag(root2));
        }
    }

    return 0;
}
