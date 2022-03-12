/*Nama File : 15UpahKerja */
/*Deskripsi : Menentukan besar gaji berdasarkan golongan dan jam kerja */
/*Nama      : Duma Mora Arta Sitorus */
/*NIM       : 24060121120004 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*K A M U S*/
    int Gol, Jam, upah;
    
    /*A L G O R I T M A*/
    printf("============================INFO GAJI===========================\n");
    printf("Masukkan Golongan Anda: ");
    scanf("%d", &Gol);
    printf("\nMauskkan Total jam kerja Anda: ");
    scanf("%d", &Jam);

    switch (Gol){
        case 1: upah = 1000;
            break;
        case 2: upah = 1500;
            break;
        case 3: upah = 2000;
            break;
        case 4: upah = 2500;
            break;
        default:
            printf("\n Golongan yang anda masukkan tidak ditemuakan");
    }

    if (0 < Jam && Jam <= 40){
        printf("\nTotal Gaji : Rp.%d", Jam*upah);
    }else{
        printf("\nTotal Gaji : Rp.%.2f ", upah*40 + (Jam-40)*1.5*upah);
    }
    return 0;
}
