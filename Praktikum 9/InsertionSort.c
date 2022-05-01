/*********************************************************
Nama Program : InsertionSort.c
Deskripsi    : Mengurutkan data dalam array dengan algoritma Insertion Sort
Nama Pembuat : Duma Mora Arta Sitorus
NIM          : 24060121120004
Tanggal      : 1 Mei 2022
*********************************************************/
#include <stdio.h>
#include <stdlib.h>

void insertionSort(int arr[], int n);
/* Proses: Mengurutkan elemen array yang ada baik secara menaik (ascending)
           ataupun menurun(Descending) dengan menggunakan algortima Insertion.
/* I.S   : Sembarang
/* F.S   : mencetak di layar hasil pengurutan*/

void insertionSort(int arr[], int n)
{
    //kamus lokal
    int i, key, j;

    //algoritma
    for(i = 1 ; i < n ; i++){
        key = arr[i];
        j = i - 1;
        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    //kamus
    int i, n;

    //algoritma
    printf("------------------- Insertion Sort -------------------\n\n");

        //input
    printf("Masukkan Jumlah Data : ");
    scanf("%d", &n);
    if(n<=0){
        printf("\n!! Masukan Harus berupa bilangan Positif !!\n");
    }else{
        int arr[n];
        printf("Masukkan Data:\n");
        for(i=0; i<n; i++){
            printf("Data ke-%d: ", i+1);
            scanf("%d", &arr[i]);
        }
        n = sizeof(arr)/sizeof(arr[0]);

        //Proses
        insertionSort(arr, n);

        //Output
        printf("------------------ Hasil Pengurutan ------------------\n\n");
            printf("Ascending  : ");
            for(i=0; i<n; i++){
                printf("%d ", arr[i]);
            }
            printf("\n\n");
            printf("Descending : ");
            for(i=n-1; i>=0; i--){
                printf("%d ", arr[i]);
            }
        }
        printf("\n-------------------- Terima Kasih --------------------\n");
    return 0;
}
