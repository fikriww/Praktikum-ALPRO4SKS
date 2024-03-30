/*Program           : jarakGLBB.c
Pembuat             : Cipta Fikri Wiratama (24060123140172)  
Waktu pengerjaan    : 25 Februari 18.57 - 19.53 : 56 menit
*/

#include <stdio.h>

int main() {
    float Luas,Kell;
    int d1,d2,s1,s2;
    printf("Masukkan diagonal satu layang layang(d1): ");
    scanf("%d", &d1);
    printf("Masukkan diagonal satu layang layang(d2): ");
    scanf("%d", &d2);
    printf("Masukkan sisi dua layang-layang (s1): ");
    scanf("%d", &s1);
    printf("Masukkan sisi dua layang-layang (s2): ");
    scanf("%d", &s2); 

    Luas=(d1*d2)/2;
    Kell=(s1+s2)*2;

    printf("Luas layang layang: %f meter persegi\n", Luas);
    printf("Keliling layang layang: %f meter\n", Kell);

    return 0;
}