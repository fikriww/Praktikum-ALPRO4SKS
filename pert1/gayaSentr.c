/*Program           : gayaSentr.c
Pembuat             : Cipta Fikri Wiratama (24060123140172)  
Waktu pengerjaan    : 21 Februari 18.57 - 20.26 : 1 jam 29 menit
*/

#include <stdio.h>
#include <conio.h>

int main() {
    int m, v, r;
    float f;
    printf("Masukkan kecepatan awal (v0): ");
    scanf("%d", &m);
    printf("Masukkan waktu (t): ");
    scanf("%d", &v);
    printf("Masukkan gravitasi (g): ");
    scanf("%d", &r);

    f=m * (v * v / r);

    printf("Jarak yang ditempuh: %f newton\n", f);

    return 0;
}