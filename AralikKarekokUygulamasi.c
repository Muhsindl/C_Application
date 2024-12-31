#include <stdio.h>
#include <math.h>
int main()
{
    int altAralik, ustAralik;
    float karekok=0;
    // Kullanıcıdan alt limit değerinin alınması
    printf("Lütfen alt limit giriniz: ");
    scanf("%d",&altAralik);
    
    // Kullanıcıdan üst limit değerinin alınması
    printf("Lütfen üst limit giriniz: ");
    scanf("%d",&ustAralik);
    
    // Karekök hesaplanması ve ekrana çıktı verilmesi
    for(int i=altAralik; i<=ustAralik; i++){
        karekok=sqrt(i);
        printf("%d sayısının karekök'ü = %.4f \n",i,karekok);
        
    }
    return 0;
}