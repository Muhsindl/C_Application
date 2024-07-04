#include <stdio.h>

int main()
{
    //Kullanıcıdan kare matris için boyut alma
    int boyut;
    printf("Boyut giriniz: ");
    scanf("%d",&boyut);
    // Belirtilen boyutta matris oluşturma
    int dizi[boyut][boyut];
    //Birim matrisi oluşturma
    for(int i=0;i<boyut;i++){
        for(int j=0;j<boyut;j++){
            if(i==j){
                dizi[i][j]=1;
            }else{
                dizi[i][j]=0;
            }
        }
    }
    //Birim matirisi ekrana yazdırma
    for(int i=0;i<boyut;i++){
        for(int j=0;j<boyut;j++){
            printf("%d",dizi[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}