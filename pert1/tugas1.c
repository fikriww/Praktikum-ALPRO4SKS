/*Program           : jarakGLBB.c
Pembuat             : Cipta Fikri Wiratama (24060123140172)  
Waktu pengerjaan    : 21 Februari 18.57 - 20.26 : 1 jam 29 menit
*/
#include <stdio.h>
#include <conio.h>

int main() {
    int v0, t, a;
    float S;
    printf("Masukkan kecepatan awal (v0): ");
    scanf("%d", &v0);
    printf("Masukkan waktu (t): ");
    scanf("%d", &t);
    printf("Masukkan percepatan (a): ");
    scanf("%d", &a);

    S=v0 * t + 0.5 + (a * t * t);

    printf("Jarak yang ditempuh: %f meter\n", S);

    return 0;
}