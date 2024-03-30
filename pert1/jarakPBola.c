/*Program           : jarakPBola.c
Pembuat             : Cipta Fikri Wiratama (24060123140172)  
Waktu pengerjaan    : 21 Februari 18.57 - 20.26 : 1 jam 29 menit
*/
#include <stdio.h>
#include <conio.h>

int main() {
    int v0, t;
    const int g = 10;
    float y;
    printf("Masukkan kecepatan awal (v0): ");
    scanf("%d", &v0);
    printf("Masukkan waktu (t): ");
    scanf("%d", &t);

    y=(v0 * t - 0.5) * (g * t * t);

    printf("Jarak yang ditempuh: %f meter\n", y);

    return 0;
}