#include <stdio.h>

int main() {
    int nomor_bulan;

    // Menerima masukan nomor bulan dari pengguna
    printf("Masukkan nomor bulan (1-12): ");
    scanf("%d", &nomor_bulan);

    // Melakukan validasi nomor bulan
    if (nomor_bulan >= 1 && nomor_bulan <= 12) {
        // Menampilkan nama bulan sesuai dengan nomor bulan yang dimasukkan
        switch(nomor_bulan) {
            case 1:
                printf("Januari\n");
                break;
            case 2:
                printf("Februari\n");
                break;
            case 3:
                printf("Maret\n");
                break;
            case 4:
                printf("April\n");
                break;
            case 5:
                printf("Mei\n");
                break;
            case 6:
                printf("Juni\n");
                break;
            case 7:
                printf("Juli\n");
                break;
            case 8:
                printf("Agustus\n");
                break;
            case 9:
                printf("September\n");
                break;
            case 10:
                printf("Oktober\n");
                break;
            case 11:
                printf("November\n");
                break;
            case 12:
                printf("Desember\n");
                break;
        }
    } else {
        // Pesan kesalahan jika nomor bulan tidak tepat
        printf("Masukan nomor bulan tidak tepat\n");
    }

    return 0;
}
