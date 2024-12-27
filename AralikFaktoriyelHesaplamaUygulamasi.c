#include <stdio.h>

int main()
{
    // Faktoriyel hesaplayan fonk. tanımlandı
    int fact(int);
    int altLimit, ustLimit;
    
    // Kullanıcıdan alt limit alındı
    printf("Alt limit giriniz: ");
    scanf("%d",&altLimit);
    
    // Kullanıcıdan üst limit alındı
    printf("Üst limit giriniz: ");
    scanf("%d",&ustLimit);
    
    // Alt limitten üst limite kadar olan tüm sayılar için döngü oluşturuldu
    int yazdir=1;
    for(int i=altLimit; i<=ustLimit; i++){
        yazdir=fact(i);
        printf("%d! Faktoriyel = %d",i,yazdir);
        printf("\n");
    }
    return 0;
}

// Faktöriyel hesaplayan fonksiyon
int fact(int n){
    if (n==1 || n==0){
        return 1;
    }else{
        return n*fact(n-1);
    }
}