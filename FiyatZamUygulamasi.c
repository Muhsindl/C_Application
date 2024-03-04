#include <stdio.h>

int main()
{
    int fiyat, zamli_fiyat,zam;
    printf("Fiyat ve zam oranı giriniz: ");
    scanf("%d%d",&fiyat,&zam);
    zamli_fiyat=fiyat+((fiyat*zam)/100);
    printf("Ürün fiyatı %d, Zam oranı:  %d, Zamlı Fiyat:%d",fiyat,zam,zamli_fiyat);

    return 0;
}
