#include <stdio.h>

int main()
{
    int yil;
    printf("Yıl değeri giriniz: ");
    scanf("%d",&yil);
    if((yil%4==0)&&(yil%100!=0)){
        printf("Artık yıldır.");
    }else{
        printf("Artık yıl değildir");
    }
    return 0;
}