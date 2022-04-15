/********************************************************************
Nama Program : mainBinSearchX.c
Deskripsi    : Program Utama untuk program Bin Search
Nama Pembuat : Duma Mora Arta Sitorus
NIM          : 24060121120004
Tanggal      : 15 April 2022
*********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "BinSearchX.h"
int main()
{
    //Kamus
    int ix;
    int x ;
    int n;
    int a;
    int i;
    int j;

    //Algoritma
    printf("-----------------Check Data Index-----------------\n");
    printf("Masukkan Jumlah Data :");
    scanf("%d", &n);
    int arr[n];
    for( i=0; i<n; i++){
        printf("Masukkan data ke-%d  : ", i);
        scanf("%d", &arr[i]);
    }
    for( i = 0; i < n; i++){
        for( j = i + 1; j < n; j++){
            if (arr[i] > arr[j]){
                a = arr[i];
                arr[i] = arr[j];
                arr[j] = a;
                }
            }
        }

    printf("\nMasukkan angka yang ingin dicari: ");
    scanf("%d", &x);
    printf("\n-------------------Data Terurut-------------------\n");
    printf("Diperoleh array: {");
    for( i=0; i<n; i++){
        printf("%d, ", arr[i]);
    }
        printf("}\n");

    printf("\n-------------------Hasil  Akhir-------------------\n");
    BinSearchX1(arr, n, x,  &ix);
        if(ix == -1){
            printf("Maka, Elemen tersebut tidak ditemukan.");
        }else{
            printf("Maka, Elemen ditemukan pada indeks ke-%d.", ix);
            printf("\nElemen ditemukan pada urutan ke-%d.", ix+1);
            }
        printf("\n\n-------------------Terima Kasih-------------------\n\n");
    return 0;
}
