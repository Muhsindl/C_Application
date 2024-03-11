#include <stdio.h>

int main()
{
    //Satır sayısı alınır
    int n;
    printf("Satır sayısı giriniz: ");
    scanf("%d",&n);
    //Alt satır için
    for (int i=0; i<n;i++){
        //Boşluk için
        for(int j=0;j<n-(i+1);j++){
            printf(" ");
        }
        //Yıldız için
        for(int k=0;k<(2*i)+1;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
