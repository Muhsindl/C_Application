//Ortak SwitchCase Uygulaması
#include <stdio.h>

int main()
{
    int gun;
    // Kullanıcıdan gün bilgisinin alınması (1-7 aralığında)
    printf("Günün kaçıncı gün olduğunu giriniz(1-7): ");
    scanf("%d",&gun);

    // Girilen gün bilgisine göre switch-case yapısının uygulanması ve hafta(içi/dışı) olduğunun belirlenmesi
    switch(gun){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Hafta içi");
            break;
        case 6:
        case 7:
            printf("Hafta sonu");
            break;
        // Aksi durumda(1-7) aralığı dışında hataya düşmesi
        default:
            printf("Geçersiz değer giriniz (1-7 arasında sayı giriniz)");
            break;
    }
    return 0;
}
