/*Nama File: 14HargaDiskon*/
/*Deskripsi: Menentukan harga diskon suatu barang berdasarkan jenis barang*/
/*Nama     : Duma Mora Arta Sitorus */
/*NIM      : 24060121120004*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*K A M U S*/
    int Harga;
    char Jenis;

    /*A L G O R I T M A*/
    printf("====================D I S K O N====================\n");
    printf("Masukkan Jenis Barang : ");
    scanf("%c", &Jenis);
    printf("\nMasukkan Harga Barang : Rp. ");
    scanf("%d",&Harga);

    switch (Jenis){
        case 'A':
            printf( "Harga barang menjadi: Rp.%f", 0.9*Harga);
            break;
        case 'B':
            printf("Harga barang menjadi : Rp.%f", 0.85*Harga);
            break;
        case 'C':
            printf("Harga barang menjadi : Rp.%f", 0.8*Harga);
            break;
        default:
            printf("Jenis barang yang anda beli tidak mendapat diskon,\nHarga barang : Rp.%d", Harga);
    }
    printf("\n==========🙏TERIMA KASIH TELAH BERBELANJA🙏==========");
    return 0;
}
