#include <stdio.h>
#include <stdlib.h>
                     //6-Bit kodlama sistemi ile karakter Tabanli Toplama uygulamasi
// Fonksiyon prototipi
int topla(int a, int b);

int main(int argc, char *argv[]) {
    char girilen_sayi1;
    char girilen_sayi2;
    int sayi_degeri1, sayi_degeri2;

    // Ilk sayiyi al ve geçerli olup olmadigini kontrol et
    printf("LUTFEN 1.RAKAMI GIRINIZ: ");
    if (scanf(" %c", &girilen_sayi1) != 1 || girilen_sayi1 < '0' || girilen_sayi1 > '9') {
        fprintf(stderr, "HATA: Lutfen yalnizca bir rakam girin (0-9 araliginda olmali).\n");
        return 1;
    }

    // Girdiden sonrasindaki karakterleri kontrol et
    if (getchar() != '\n') { // Eger baska bir karakter varsa (yani daha fazla girdi varsa)
        fprintf(stderr, "HATA: Lutfen yalnizca tek bir rakam girin, baska karakter girilemez.\n");
        return 1;
    }

    // Ikinci sayiyi al ve geçerli olup olmadigini kontrol et
    printf("LUTFEN 2.RAKAMI GIRINIZ: ");
    if (scanf(" %c", &girilen_sayi2) != 1 || girilen_sayi2 < '0' || girilen_sayi2 > '9') {
        fprintf(stderr, "HATA: Lutfen yalnizca bir rakam girin (0-9 araliginda olmali).\n");
        return 1;
    }
   
    // Girdiden sonrasindaki karakterleri kontrol et
    if (getchar() != '\n') { // Eger baska bir karakter varsa (yani daha fazla girdi varsa)
        fprintf(stderr, "HATA: Lutfen yalnizca tek bir rakam girin, baska karakter girilemez.\n");
        return 1;
    }

    // Sayisal degerlere çevir
    sayi_degeri1 = girilen_sayi1 - '0';
    sayi_degeri2 = girilen_sayi2 - '0';

    // Toplama islemi
    int toplama_sonuc = topla(sayi_degeri1, sayi_degeri2);
    printf("TOPLAMA ISLEMI SONUCU = %d\n", toplama_sonuc);

    // Sonuç 9'dan büyükse hata
    if (toplama_sonuc > 9) {
        fprintf(stderr, "HATA: Sonuc (%d), tek haneli siniri asti.\n", toplama_sonuc);
        return 1;
    }

    return 0;
}

int topla(int a, int b) {
    return a + b;
}

