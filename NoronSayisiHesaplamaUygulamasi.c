#include <stdio.h>

int main()
{
    int girisNoronSayisi, cikisNoronSayisi;
    int katmanSayisi;
    int noronSayisiDizi[100]; 

    // Giriş katmanındaki nöron sayısını al
    printf("Giriş katmanındaki nöron sayısını giriniz: ");
    scanf("%d", &girisNoronSayisi);

    // Çıkış katmanındaki nöron sayısını al
    printf("Çıkış katmanındaki nöron sayısını giriniz: ");
    scanf("%d", &cikisNoronSayisi);

    // Gizli katman sayısını al
    printf("Gizli katman sayısını giriniz (maksimum 100): ");
    scanf("%d", &katmanSayisi);

    if (katmanSayisi > 100)
    {
        printf("Maksimum 100 katmana izin veriliyor.\n");
        return 1;
    }

    // Her gizli katmandaki nöron sayısını al
    for (int i = 0; i < katmanSayisi; i++)
    {
        printf("%d. gizli katmandaki nöron sayısını giriniz: ", i + 1);
        scanf("%d", &noronSayisiDizi[i]);
    }

    int toplamAgirlik = 0;

    // Giriş katmanı ile ilk gizli katman arasındaki ağırlıklar
    toplamAgirlik += girisNoronSayisi * noronSayisiDizi[0];

    // Gizli katmanlar arasındaki ağırlıklar
    for (int i = 0; i < katmanSayisi - 1; i++)
    {
        toplamAgirlik += noronSayisiDizi[i] * noronSayisiDizi[i + 1];
    }

    // Son gizli katman ile çıkış katmanı arasındaki ağırlıklar
    toplamAgirlik += noronSayisiDizi[katmanSayisi - 1] * cikisNoronSayisi;

    printf("Toplam hesaplanacak ağırlık sayısı: %d\n", toplamAgirlik);

    return 0;
}
