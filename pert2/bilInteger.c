#include <stdio.h>

int main() {
    int i;

    // Menerima masukan bilangan bulat dari pengguna
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &i);

    // Menentukan apakah bilangan tersebut positif, nol, atau negatif
    if (i > 0) {
        printf("Bilangan bulat tersebut adalah bilangan positif\n");
    } else if (i == 0) {
        printf("Bilangan bulat tersebut adalah nol\n");
    } else {
        printf("Bilangan bulat tersebut adalah bilangan negatif\n");
    }

    return 0;
}
