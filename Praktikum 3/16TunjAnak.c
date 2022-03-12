/*Nama File : 16TunjAnak */
/*Deskripsi : Menentukan besar tunjangan anak berdasarkan jumlah anak dan gaji pokok */
/*Nama      : Duma Mora Arta Sitorus */
/*NIM       : 24060121120004 */

#include <stdio.h>
#include <stdlib.h>

int main()
{   /*K A M U S*/
    int JumlahAnk,GajiPokok;

    /*A L G O R I T M A*/
    printf("=======================TUNJANGAN ANAK=======================\n");

             /*Input*/
    printf("Jumlah anak : ");
    scanf("%d",&JumlahAnk);
    printf("\nBesar gaji pokok: Rp. ");
    scanf("%d",&GajiPokok);
    printf("==============================================================\n");

             /*Proses pengecekan dan output */
    if (JumlahAnk>=0 && JumlahAnk<3){
        printf("Besar tunjangan anak:Rp.%.2f", (JumlahAnk*0.1*GajiPokok));
    }else{
        printf("Besar tunjangan anak:Rp.%.2f", (3*0.1*GajiPokok));
    }

    printf("\n==============================================================");
    return 0;
}