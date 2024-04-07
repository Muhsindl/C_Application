#include <stdio.h>
#include <math.h>
// Diskriminant hesaplama
int main()
{
    // a,b ve c değerlerini kullanıcıdan alıyoruz
    int a,b,c;
    printf("A değeri giriniz: ");
    scanf("%d",&a);
    printf("B değeri giriniz: ");
    scanf("%d",&b);
    printf("C değeri giriniz: ");
    scanf("%d",&c);
    // Diskriminant hesaplama
    int result=pow(b,2)-(4*a*c);
    // Sonucu ekrana yazdırma
    printf("Diskriminant sonucu= %d",result);
    return 0;
}
