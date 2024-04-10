#include <stdio.h>

int main()
{
    // Alt ve üst sınırları kullanıcıdan alarak çarpım tablosunu oluşturuyoruz.
    int alt,ust;
    printf("Alt Sınır giriniz: ");
    scanf("%d",&alt);
    printf("Üst Sınır giriniz: ");
    scanf("%d",&ust);
    // İç içe iki döngü ile çarpım tablosunu oluşturuyoruz.
    for(int i=alt;i<=ust;i++){
        for(int j=0;j<=10;j++){
            printf("%d*%d=%d\n",i,j,(i*j));
        }
    }
    return 0;
}
