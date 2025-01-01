#include <stdio.h>

int main()
{
    int basamak;
    // Kullanıcıdan basamak sayısının alınması
    printf("Fibonacci için kaçıncı basamak üst limit olsun: ");
    scanf("%d",&basamak);

    // Fibonacci başlangıç basamak sayısının verilmesi
    int n1=0;
    int n2=1;
    printf("%d - ",n1);
    printf("%d - ",n2);

    // Fibonacci de ki bir sonraki basamağın hesaplanıp ekrana yazdırılması
    for(int i=1; i<=basamak-2;i++){
        int n3=n1+n2;
        printf("%d - ",n3);
        n2=n3;
        n1=n2;
    }
    return 0;
}