#include <stdio.h> 

int main() 
{
    //Değişkenler tanımlanır ve kullanıcıdan girdi alınır. 
    float ana_para, zaman, faiz_orani, faiz_miktari;
    printf("Ana para miktarı giriniz: ");
    scanf("%f",&ana_para);
    
    printf("Zaman giriniz: ");
    scanf("%f",&zaman);
    
    printf("Faiz Oranı giriniz: ");
    scanf("%f",&faiz_orani); 
    
    //İşlem yapılır
    faiz_miktari=(ana_para*zaman*faiz_orani)/100;
    printf("Basit faiz hesabı ile hesaplanan faiz miktarı= %f",faiz_miktari);
    
    return 0;
}