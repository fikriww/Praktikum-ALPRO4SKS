#include <stdio.h>

void CekSegitiga(int sisi1, int sisi2, int sisi3) {
    // Memeriksa apakah terdapat nilai yang bukan sisi segitiga
    if (sisi1 <= 0 || sisi2 <= 0 || sisi3 <= 0) {
        printf("Terdapat nilai yang bukan sisi segitiga\n");
        return;
    }

    // Menentukan jenis segitiga
    if (sisi1 == sisi2 && sisi2 == sisi3) {
        printf("Segitiga Sama Sisi\n");
    } else if (sisi1 == sisi2 || sisi1 == sisi3 || sisi2 == sisi3) {
        printf("Segitiga Sama Kaki\n");
    } else {
        printf("Segitiga Sembarang\n");
    }
}

int main() {
    int sisi1, sisi2, sisi3;

    // Menerima masukan sisi-sisi segitiga dari pengguna
    printf("Masukkan panjang sisi pertama: ");
    scanf("%d", &sisi1);
    printf("Masukkan panjang sisi kedua: ");
    scanf("%d", &sisi2);
    printf("Masukkan panjang sisi ketiga: ");
    scanf("%d", &sisi3);

    // Memanggil fungsi CekSegitiga untuk menentukan jenis segitiga
    CekSegitiga(sisi1, sisi2, sisi3);

    return 0;
}
