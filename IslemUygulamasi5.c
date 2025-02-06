#include <stdio.h>

int main()
{
    int elemanSayisi, elem, min, max;
    float toplam=0;
    int dizi[100];

  // Dizi boyutunun kullanıcıdan alınması
    printf("Dizi boyutu giriniz: ");
    scanf("%d",&elemanSayisi);
  // Elemanların alınması ve toplama işleminin yapılması
    for(int i=0; i<elemanSayisi; i++){
        printf("%d 'nci Eleman giriniz: ",i+1);
        scanf("%d",&elem);
        dizi[i]=elem;
        toplam+=(float)elem;
    }
  // Ortalamanın ekranda gösterilmesi
    printf("Ortalama: %.2f\n",(toplam/elemanSayisi));
    
    min=dizi[0];
    max=dizi[0];
  // Minimum ve maximum elemanın ekranda gösterilmesi
    for(int i=0; i<elemanSayisi; i++){
        if(min>dizi[i]){
            min=dizi[i];
        }
        
        if(max<dizi[i]){
            max=dizi[i];
        }
    }
  // Hesaplanan minimum ve maximum elemanın ekranda gösterilmesi
    printf("Minimum eleman: %d\n",min);
    printf("Maximum eleman: %d",max);
    return 0;
}
