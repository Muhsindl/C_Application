// ∑i=0 5*i+6 denklemi çözümü
#include <stdio.h>

int main()
{
    int n,toplam;
    // Kullanıcıdan sayı alınır
    printf("Sayı giriniz: ");
    scanf("%d",&n);
    toplam=0;
    // ∑i=0 5*i+6 denklemi çözümü
    for(int i=0;i<=n;i++){
        toplam+=(5*i)+6;
    }
    // Sonuç ekrana yazdırılır
    printf("Cevap:%d",toplam);
    return 0;
}