#include <stdio.h>

int main()
{
    int sayi,toplam;
    printf("Sayı giriniz: ");
    scanf("%d",&sayi);
    toplam=0;
    for(int i=1; i<=(sayi/2);i++){
        if(sayi%i==0){
            toplam+=i;
        }
    }
    if(toplam==sayi){
        printf("%d sayısı Mükemmel sayıdır.",sayi);
    }
    else{
        printf("%d sayısı Mükemmel sayı değildir.",sayi);
    }
    return 0;
}
