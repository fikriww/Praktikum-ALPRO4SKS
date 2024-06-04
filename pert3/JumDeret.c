/*
Nama    		: Cipta Fikri Wiratama
NIM     		: 24060123140172
Nama Program 	: JumDeret.c
Deskripsi 		: Menghitung dan menampilkan pada jumlah deret bilangan sampai N (N>0)
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    // Kamus
    int N,i,sum;

    // Algoritma
    printf("Masukkan nilai : ");
    scanf("%d", &N);

    if (N > 0){
        sum = 0;
        for(i=1; i<=N; i++){
            sum = sum +i;
        }
        printf("Jumlah deret : %d", sum);
    }
    else printf("Masukkan nilai integer positif");
    return 0;
}
