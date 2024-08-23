#include <stdio.h>
#include <math.h>

int egikAtis(int hiz, int g, int aci);

int main() {
    int h, g, a;
    
    printf("İlk hız giriniz: ");
    scanf("%d", &h);
    
    printf("Yer çekimi ivmesi giriniz: ");
    scanf("%d", &g);
    
    printf("Açı giriniz: ");
    scanf("%d", &a);    
    
    printf("Uçuş süresi: %d\n", egikAtis(h, g, a));

    return 0;
}

// Eğik atış fonksiyonu
int egikAtis(int hiz, int g, int aci) {
    double radian = aci * M_PI / 180.0; // Açı radiana çevrilir
    int formul = (2 * hiz * sin(radian)) / g;
    return formul;
}
