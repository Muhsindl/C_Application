#include <stdio.h>

int main()
{
    int altAralik, ustAralik;
    // Alt sınırın kullanıcıdan alınması
    printf("Alt aralık giriniz: ");
    scanf("%d",&altAralik);
    
    // Üst sınırın kullanıcıdan alınması
    printf("Üst aralık giriniz: ");
    scanf("%d",&ustAralik);
    
    // Çarpma işleminin yapılması ve ekrana yazdırılması
    for(int i=altAralik; i<=ustAralik; i++){
        printf("-------------\n");
        
        for(int j=1; j<=10;j++){
            printf("%d x %d = %d \n",i,j,(i*j));
        }
    }
    return 0;
}