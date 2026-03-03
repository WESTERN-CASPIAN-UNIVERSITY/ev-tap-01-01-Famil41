/*Tapşırıq 1: Şəxsi məlumatlar
Aşağıdakı məlumatları ekrana çıxaran proqram yazın:

•	Adınız
•	Soyadınız
•	Yaşınız
•	Universitetiniz
•	İxtisasınız
Gözlənilən çıxış:
Ad: Əli
Soyad: Məmmədov
Yaş: 20
Universitet: Bakı Dövlət Universiteti
İxtisas: Kompüter Elmləri*/
#include <stdio.h>

int main() {
    char ad[50];
    char soyad[50];
    char universitet[100];
    char ixtisas[100];
    int yas;

    printf("Adinizi daxil edin: ");
    scanf("%s", ad);

    printf("Soyadinizi daxil edin: ");
    scanf("%s", soyad);

    printf("Yasinizi daxil edin: ");
    scanf("%d", &yas);

    printf("Universitetinizi daxil edin: ");
    scanf("%s", universitet);

    printf("Ixtisasinizi daxil edin: ");
    scanf("%s", ixtisas);

    printf("\n----- Sizin Melumatlar -----\n");
    printf("Ad: %s\n", ad);
    printf("Soyad: %s\n", soyad);
    printf("Yas: %d\n", yas);
    printf("Universitet: %s\n", universitet);
    printf("Ixtisas: %s\n", ixtisas);

    return 0;
}

