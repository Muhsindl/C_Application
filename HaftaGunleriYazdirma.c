#include <stdio.h>

int main()
{
    int gun;
    printf("Günün kaçıncı gün olduğunu giriniz(1-7): ");
    scanf("%d",&gun);
    switch(gun){
        case 1:
        printf("Pazartesi");
        break;
        case 2:
        printf("Salı");
        break;
        case 3:
        printf("Çarşamba");
        break;
        case 4:
        printf("Perşembe");
        break;
        case 5:
        printf("Cuma");
        break;
        case 6:
        printf("Cumartesi");
        break;
        case 7:
        printf("Pazar");
        break;
        default:
        printf("Geçersiz değer giriniz (1-7 arasında sayı giriniz)");
        
    }
    return 0;
}