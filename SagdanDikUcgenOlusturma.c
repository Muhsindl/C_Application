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
        for(int k=0;k<n-(i+1);k++){
            printf(" ");
        }
        //Yıldız için
        for(int k=0;k<i;k++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
