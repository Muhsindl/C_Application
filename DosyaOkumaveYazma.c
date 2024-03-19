// Dosya okuma ve yazma
#include <stdio.h>
#include <stdlib.h> //Kütüphane tanımlanır 

#define VERI_BOYUTU 1000 // 1000 karakterlik yer açılır bellekten
int main()
{
    char veri[VERI_BOYUTU]; //Veri boyutunu depolayan karakter dizisi
    FILE *fPtr; //Dosyayı referans eden dosya işaretçisi (pointer)
    
    // Dosyayı w(write) modunda açar varsa açar yoksa dosyayı oluşturur
    fPtr=fopen("dosya.txt","w+");
    
    //fopen(), eğer başarısız ise NULL değeri döndürür
    if(fPtr==NULL){
        //Dosya oluşturulamadığı için programdan çık
        printf("Dosya oluşturulamadı.\n");
        exit(EXIT_FAILURE);
    }
    //Dosyaya kaydedilecek olan girdileri kullanıcıdan al.
    printf("Dosyaya kaydedilecek olan girdiyi al:\n");
    fgets(veri,VERI_BOYUTU,stdin); // (veri) değişkenin içerisini gönderiyoruz boyut ise (VERI_BOYUTU) kadar olacak (stdin) standart input demek
    
    //Veriyi dosyaya yaz
    fputs(veri,fPtr); // (veri) değişkenini (fPtr) işaret ettiği dosyaya yaz.
    
    //Dosya kapatma
    fclose(fPtr);
    
    return 0;
}