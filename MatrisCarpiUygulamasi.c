#include <stdio.h>

int main()
{
    int boyut;
    // Kullanıcıdan boyut bilgisini alalım
    printf("Boyut giriniz: ");
    scanf("%d",&boyut);
    //Diziyi oluşturalım
    int array[boyut][boyut];
    //Diziyi dolduralım
    for(int i=0;i<boyut;i++){
        for(int j=0; j<boyut;j++){
            if(i==j || i+j==boyut-1){
                array[i][j]=1;
            }else{
                array[i][j]=0;
            }
        }
    }
    //Diziyi ekrana yazdıralım
    for(int i=0;i<boyut;i++){
        for(int j=0; j<boyut;j++){
            printf("%d",array[i][j]);
        }
        printf("\n");
    }
    return 0;
}