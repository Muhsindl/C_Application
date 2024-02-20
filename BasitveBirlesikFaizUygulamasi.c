#include <stdio.h> 
#include <math.h> //pow fonksiyonu kullanmak için

int main() 
{   
    //Kullanıcıdan girdi alınır
    float ana_para, zaman, faiz_orani, basit_faiz_miktari, birlesik_faiz_miktari;
    printf("Ana para miktarı giriniz: ");
    scanf("%f",&ana_para);
    
    printf("Zaman giriniz: ");
    scanf("%f",&zaman);
    
    printf("Faiz Oranı giriniz: ");
    scanf("%f",&faiz_orani); 

    //Basit faiz hesaplanır ve çıktı verilir
    basit_faiz_miktari=(ana_para*zaman*faiz_orani)/100;
    printf("Basit faiz hesabı ile hesaplanan faiz miktarı= %f\n",basit_faiz_miktari);

    //Birleşik faiz hesaplanır ve çıktı verilir
    birlesik_faiz_miktari=ana_para*(pow((1+faiz_orani/100),zaman));
    printf("Birleşik faiz hesabı ile hesaplanan faiz miktarı= %f\n",birlesik_faiz_miktari);
    
    return 0;
}