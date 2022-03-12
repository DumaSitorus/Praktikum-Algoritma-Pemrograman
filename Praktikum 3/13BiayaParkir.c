/*Nama File: 13BiayaParkir*/
/*Deskripsi: Menentukan besar biaya parkir berdasarkan lama jam parkir*/
/*Nama     : Duma Mora Arta Sitorus */
/*NIM      : 24060121120004*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
     /*K A M U S*/
    int Jam , biaya;

    /*A L G O R I T M A*/
    printf("====================Biaya Parkir====================\n");

    printf("Lama Parkir: ");                                   /*INPUT*/
    scanf("%d", &Jam);
    if (Jam <2){                                               /*PROSES PENGECEKAN */
        printf("\nBiaya Parkir : Rp.2000");                    /*OUTPUT*/
    }else{                                                     /*PROSES PENGECEKAN */
        printf("\nBiaya Parkir : Rp.%d", 2000 + (Jam-2)*500);  /*PROSES PENGECEKAN */
    }
    printf("\n====================Terima kasih====================");
    return 0;
}
