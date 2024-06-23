#include <stdio.h>

int main()
{
    char metin[50];
    //Kullanıcıdan cümle alınır
    printf("Metin giriniz: ");
    scanf("%s", metin);  

    for(int i=(sizeof(metin)/sizeof(metin[0]))-1;i>=0;i--){ //sizeof(metin)/sizeof(metin[0]) ifadesi length yani metin boyutunu temsil eder
        printf("%c",metin[i]); //Ekrana yazdırma
    }
    return 0;
}
