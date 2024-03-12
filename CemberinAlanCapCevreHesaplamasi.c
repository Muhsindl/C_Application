
#include <stdio.h>
#include <math.h> //M.PI kullanımı için

//Fonksiyonları tanımladık
float cemberCapiHesapla(float yaricap);
float cemberCevresiHesapla(float yaricap);
float daireAlaniHesapla(float yaricap);

int main()
{
    float yaricap, cap, cevre, alan;
    printf("Çemberin/Dairenin yarıçapını giriniz: ");
    scanf("%f",&yaricap);
    cap=cemberCapiHesapla(yaricap);
    cevre=cemberCevresiHesapla(yaricap);
    alan=daireAlaniHesapla(yaricap);
    
    printf("Çember çapı= %.2f birimdir\n",cap);
    printf("Çember çevresi= %.2f birimdir\n",cevre);
    printf("Daire alanı= %.2f birimdir\n",alan);
    return 0;
}
//Fonksyonları oluşturduk
float cemberCapiHesapla(float yaricap){
    return (2*yaricap);
}
float cemberCevresiHesapla(float yaricap){
    return (2*yaricap*M_PI);
}
float daireAlaniHesapla(float yaricap){
    return (yaricap*yaricap*M_PI);
}