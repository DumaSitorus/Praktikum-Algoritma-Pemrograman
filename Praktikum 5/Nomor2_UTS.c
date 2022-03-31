/*
Nama Program: NaikBukit
Deskripsi   : Menghitung selisih ketinggian bukit tertinggi dan terendah
Nama Pembuat: Duma Mora Arta Sitorus
NIM         : 24060121120004
Tanggal     : 31 Maret 2021
*/

#include<stdio.h>
#include<math.h>

int main()
{
    //Kamus
    int N, i, max, min, selisih;
    //Algoritma
    printf("===============================================\n");
    printf("======== Menghitung Selisih Ketinggian ========\n");
    printf("===============================================\n");
        //Input
    printf("Masukkan jumlah Data: ");
    scanf("%d", &N);
    int T[N];
    printf("\nMasukkan Data ketinggian\n");
    for(i=1; i<=N;i++){
        printf("Data ke-%d: ",i );
        scanf("%d",&T[i] );
    }
        //Proses
    min = T[1];
     for(i=1; i<N; i++){
        if(min > T[i]){
            min = T[i];
        }
     }
    max = T[N];
     for(i=1; i<N ; i++){
        if(max < T[i]){
            max=T[i];
        }
     }
    //Output
    printf("\nKetinggian maksimal :%d",max);
    printf("\nKetinggian minimal  :%d",min);
    selisih = max - min;
    printf("\nmaka, selisih ketinggian = %d - %d = %d\n", max,min,selisih);
}
