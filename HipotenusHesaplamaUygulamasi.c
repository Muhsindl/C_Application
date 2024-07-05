#include <stdio.h>
#include <math.h> //pow() ve sqrt() fonksiyonu için tanımlıyoruz

int main()
{
    int a,b,hip;
    //Birinci dik kenarı alıyoruz
    printf("Dik kenara ilk komşuyu giriniz:");
    scanf("%d",&a);
    //İkinci dik kenarı alıyoruz
    printf("Dik kenara ikinci komşuyu giriniz:");
    scanf("%d",&b);    
    // Hipotenüs hesaplıyoruz
    hip=sqrt(pow(a,2)+pow(b,2));
    //Ekran da hipotenüsü gösteriyoruz
    printf("Hipotenüs: %d",hip);

    return 0;
}