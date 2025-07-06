// ∑i=0 5*i+deger denklemi çözümü
#include <stdio.h>

int main()
{
    int n,toplam, sabit;
    // Kullanıcıdan sayı alınır
    printf("Sınır sayısı giriniz: ");
    scanf("%d",&n);
    printf("Sabit sayı giriniz: ");
    scanf("%d",&sabit);
    toplam=0;
    // ∑i=0 5*i+6 denklemi çözümü
    for(int i=0;i<=n;i++){
        toplam+=(5*i)+sabit;
    }
    // Sonuç ekrana yazdırılır
    printf("Cevap:%d",toplam);
    return 0;
}
