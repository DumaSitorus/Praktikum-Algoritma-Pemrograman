/********************************************************************
Nama Program : SubBinSearchX.c
Deskripsi    : SubProgram/Body dari program SubBinSearchX
Nama Pembuat : Duma Mora Arta Sitorus
NIM          : 24060121120004
Tanggal      : 15 April 2022
*********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "BinSearchX.h"

void BinSearchX1(int T[], int N, int X, int *IX)
/*
 Proses: Mencari letak indeks dari suatu data masukan (X), dari
         sekumpulan data yang dimasukkan sejumlah n (Bebas berapa
         saja) dan kemudian di urutkan, dan di keluarkan letak indeks
         masukan X dari data terurut tersebut.
 I.S   : Sembarang
 F.S   : mencetak di layar letak indeks X dari antara data-data
           yang telah diurutkan.
*/
{
    //Kamus lokal
    int upper, lower, mid;
    //Algoritma
    upper = N-1;
    lower = 0;
    mid = (upper + lower) / 2;

    while (X!=T[mid] && lower<upper ){
        if(X > T[mid]){
            lower = mid + 1;
        }else{
            upper = mid - 1;
        }
       mid = (upper+lower) / 2;
    }
    if (X == T[mid]){
        *IX = mid;
    }else{
        *IX = -1;
    }
}
