/*Program           : jarakGLBB.c
Pembuat             : Cipta Fikri Wiratama (24060123140172)  
Waktu pengerjaan    : 25 Februari 18.57 - 19.53 : 56 menit
*/

#include <stdio.h>

int main() {
    int r;
    const float PHI = 3.1415;
    float Vb,Vk;
    
    printf("Masukkan jari jari bola (r): ");
    scanf("%d", &r);

    Vb=(4 * PHI * r * r * r)/3;
    Vk=(Vb)/2;

    printf("Volume bola kerucut: %f meter kubik\n", Vk);

    return 0;
}