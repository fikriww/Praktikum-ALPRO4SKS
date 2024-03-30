#include <stdio.h>

int main() {
    int iA, iB;
    char pilihan;

    // Menerima masukan bilangan pertama
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &iA);

    // Menerima masukan bilangan kedua
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &iB);

    // Menerima masukan pilihan operasi
    printf("Pilihan operasi (a, b, c, d, e, f): ");
    scanf(" %c", &pilihan);

    // Melakukan operasi sesuai dengan pilihan yang dimasukkan
    switch(pilihan) {
        case 'a':
            printf("Hasil iA + iB = %d\n", iA + iB);
            break;
        case 'b':
            printf("Hasil iA - iB = %d\n", iA - iB);
            break;
        case 'c':
            printf("Hasil iA * iB = %d\n", iA * iB);
            break;
        case 'd':
            if (iB != 0) {
                printf("Hasil iA / iB = %.2f\n", (float)iA / iB);
            } else {
                printf("Pembagian oleh nol tidak diperbolehkan\n");
            }
            break;
        case 'e':
            if (iB != 0) {
                printf("Hasil iA div iB = %d\n", iA / iB);
            } else {
                printf("Pembagian oleh nol tidak diperbolehkan\n");
            }
            break;
        case 'f':
            printf("Hasil iA mod iB = %d\n", iA % iB);
            break;
        default:
            printf("Bukan pilihan menu yang benar\n");
    }

    return 0;
}
