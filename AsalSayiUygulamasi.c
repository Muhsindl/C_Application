#include <stdio.h>

int main()
{
    short sayac=0;
    int sayi;
    // Sayı alınır
    printf("Sayı gir: ");
    scanf("%d",&sayi);
    // Asal sayı olup olmadığı sorgulanır
    for(int i=2; i<sayi; i++){
        if (sayi%i==0){
            sayac++;
        }
    }
    // Eğer böleni yoksa sayı asaldır diğer durumda ise asal değildir ekran çıktısı verilir
    if(sayac==0){
        printf("%d sayısı asaldır",sayi);
    }
    else{
        printf("Asal değildir.");
    }
    return 0;
}