#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1, x2, y1, y2;
    
    //Kullanıcıdan x1 değerinin alınması
    printf("Lütfen x1 değeri giriniz: ");
    scanf("%d", &x1);
    
    //Kullanıcıdan x2 değerinin alınması
    printf("Lütfen x2 değeri giriniz: ");
    scanf("%d", &x2);
    
    //Kullanıcıdan y1 değerinin alınması
    printf("Lütfen y1 değeri giriniz: ");
    scanf("%d", &y1);
    
    //Kullanıcıdan y2 değerinin alınması
    printf("Lütfen y2 değeri giriniz: ");
    scanf("%d", &y2);
    
    // Uzaklık hesaplama işlemi
    float hesap = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("Sonuç: %f\n", hesap);
    
    return 0;
}
