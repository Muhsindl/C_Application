#include <stdio.h>
#include <math.h>

int main()
{
    float kenar1, kenar2, kenar3, aci1, aci2, aci3;

    printf("1. kenarı giriniz: ");
    scanf("%f", &kenar1);
    printf("1. kenarı gören açıyı (derece) giriniz: ");
    scanf("%f", &aci1);

    printf("2. kenarı giriniz: ");
    scanf("%f", &kenar2);
    printf("2. kenarı gören açıyı (derece) giriniz: ");
    scanf("%f", &aci2);

    printf("3. kenarı giriniz: ");
    scanf("%f", &kenar3);
    printf("3. kenarı gören açıyı (derece) giriniz: ");
    scanf("%f", &aci3);

    // Açıları radyana çevrildi
    float aci1Radyan = aci1 * M_PI / 180.0;
    float aci2Radyan = aci2 * M_PI / 180.0;
    float aci3Radyan = aci3 * M_PI / 180.0;

    // Formüller hesaplanır
    float kenar1Formul = sqrt(pow(kenar2, 2) + pow(kenar3, 2) - 2 * kenar2 * kenar3 * cos(aci1Radyan));
    float kenar2Formul = sqrt(pow(kenar1, 2) + pow(kenar3, 2) - 2 * kenar1 * kenar3 * cos(aci2Radyan));
    float kenar3Formul = sqrt(pow(kenar1, 2) + pow(kenar2, 2) - 2 * kenar1 * kenar2 * cos(aci3Radyan));

    // Sonuçları ekrana yazdır
    printf("1. kenarın hesaplanan uzunluğu: %.2f\n", kenar1Formul);
    printf("2. kenarın hesaplanan uzunluğu: %.2f\n", kenar2Formul);
    printf("3. kenarın hesaplanan uzunluğu: %.2f\n", kenar3Formul);

    return 0;
}
