#include <stdio.h>

int main() {
    int nomor_hari;

    // Menerima masukan nomor hari dari pengguna
    printf("Masukkan nomor hari (1-7): ");
    scanf("%d", &nomor_hari);

    // Melakukan validasi nomor hari
    if (nomor_hari >= 1 && nomor_hari <= 7) {
        // Menampilkan nama hari sesuai dengan nomor hari yang dimasukkan
        switch(nomor_hari) {
            case 1:
                printf("Minggu\n");
                break;
            case 2:
                printf("Senin\n");
                break;
            case 3:
                printf("Selasa\n");
                break;
            case 4:
                printf("Rabu\n");
                break;
            case 5:
                printf("Kamis\n");
                break;
            case 6:
                printf("Jumat\n");
                break;
            case 7:
                printf("Sabtu\n");
                break;
        }
    } else {
        // Pesan kesalahan jika nomor hari tidak tepat
        printf("Masukan nomor hari tidak tepat\n");
    }

    return 0;
}
