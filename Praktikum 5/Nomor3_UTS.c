/*
Nama Program: MenghitungSubArray
Deskripsi   : Menghitung jumlah Sub array
Nama Pembuat: Duma Mora Arta Sitorus
NIM         : 24060121120004
Tanggal     : 31 Maret 2021
*/
int main()
{
    //Kamus
        int i,j,N,sum;
    //Algoritma
    printf("==============================================\n");
    printf("=============== Jumlah Sub Array =============\n");
    printf("==============================================\n");
        //Input
        printf("Masukkan jumlah elemen array : ");
        scanf("%d", &N);

        printf("Masukkan elemen array        : ");
        int T[N];
        for(i=1; i<=N; i++){
            printf("\nElemen ke-%d : ", i);
            scanf("%d", &T[i]);
        }
        //Proses3
        sum=0;
        for(i=1; i<=N; i++){
            sum = sum + T[i];
            for(j=i+1; j<=N; j++){
                sum = sum + T[j];
            }
        }
        //Output
        printf("\nMaka, jumlah sub elemen array = %d\n", sum);
    }
