#include <stdio.h>
#include <stdlib.h>

struct ogrenci {
    char ad[50];
    char soyad[50];
    int no;
    char adres[100];
};

int main() {
    struct ogrenci ogrenciler[5];
    int i;

    // kullanýcýdan bilgileri al
    for(i=0; i<5; i++) {
        printf("Ogrenci #%d bilgilerini girin:\n", i+1);
        printf("Ad: ");
        scanf("%s", ogrenciler[i].ad);
        printf("Soyad: ");
        scanf("%s", ogrenciler[i].soyad);
        printf("No: ");
        scanf("%d", &ogrenciler[i].no);
        printf("Adres: ");
        scanf("%s", ogrenciler[i].adres);
    }

    // ekrana yazdýr
    printf("\nOgrenci Bilgileri:\n");
    for(i=0; i<5; i++) {
        printf("Ogrenci #%d:\n", i+1);
        printf("Ad: %s\n", ogrenciler[i].ad);
        printf("Soyad: %s\n", ogrenciler[i].soyad);
        printf("No: %d\n", ogrenciler[i].no);
        printf("Adres: %s\n\n", ogrenciler[i].adres);
    }

    return 0;
}

