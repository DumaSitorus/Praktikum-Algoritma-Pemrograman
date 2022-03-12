/*Nama File : 17TarifPLN */
/*Deskripsi : Menentukan besar pembayaran listrik berdasarkan golongan tarif dan total daya yang digunakan */
/*Nama      : Duma Mora Arta Sitorus */
/*NIM       : 24060121120004 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*K A M US*/
    int GolT;   //Golongan Tarif (1,2)
    int W;      //Daya listrik (kWh)
/*A L G O R I T M A*/
    printf("============Tarif Listrik==========\n");
            /*Input*/
    printf("Masukkan Golongan Tarif: ");
    scanf("%d",&GolT);
    printf("\nMasukkan  daya listrik: ");
    scanf("%d",&W);
    printf("\n===================================\n");
            /*Proses dan output*/
    if (GolT==1) {
        if (W<1000){
            printf("Tarif Listrik:Rp.%d", W*1000);
        }else{
            printf("Tarif Listrik:Rp.%.2f", W*1000*0.1 + W*1000);
        }
    }else if (GolT==2){
        if (W<1000){
            printf("Tarif Listrik:Rp.%d", W*2000);
        }else{
            printf("Tarif Listrik:Rp.%.2f", W*2000*0.1 + W*1000);
        }
    }else{  // Jika golongan tarif bukan 1 atau 2.
        printf("Terjadi kesalahan, Tolong cek kembali !");
    }
    printf("\n===================================");
    return 0;
}
