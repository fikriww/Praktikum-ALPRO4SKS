#include <stdio.h>

float hitungTahanan() {
    float tahanan1, tahanan2, tahanan3, total_tahanan;

    // Menerima masukan tahanan dari pengguna
    printf("Masukkan nilai tahanan ke-1: ");
    scanf("%f", &tahanan1);
    printf("Masukkan nilai tahanan ke-2: ");
    scanf("%f", &tahanan2);
    printf("Masukkan nilai tahanan ke-3: ");
    scanf("%f", &tahanan3);

    // Memeriksa apakah ada masukan tahanan yang negatif
    if (tahanan1 < 0 || tahanan2 < 0 || tahanan3 < 0) {
        printf("Masukan tahanan tidak boleh negatif\n");
        return -1; // Mengembalikan nilai negatif untuk menandakan kesalahan
    }

    // Menghitung total tahanan jika tidak ada masukan yang negatif
    total_tahanan = tahanan1 + tahanan2 + tahanan3;
    printf("Total tahanan dalam rangkaian seri adalah: %.2f\n", total_tahanan);

    return total_tahanan;
}

int main() {
    hitungTahanan(); // Memanggil fungsi hitungTahanan untuk menjalankan program
    return 0;
}
