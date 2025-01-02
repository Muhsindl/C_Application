#include <stdio.h>

int main()
{
    int yil;
    // Yıl değerinin kullanıcıdan alınması
    printf("Yıl değeri giriniz: ");
    scanf("%d",&yil);
    // Artık yıl srogulamasının yapılması
    if((yil%4==0)&&(yil%100!=0)){
        printf("Artık yıldır.");
    }else{
        printf("Artık yıl değildir");
    }
    return 0;
}
