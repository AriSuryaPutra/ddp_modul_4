#include <stdio.h>

int main(){
    int kode_bangun;
    int luas_persegi,sisi;
    int luas_persegi_panjang,panjang,lebar;
    float luas_lingkaran,jari_jari;

    printf("##########################\n");
    printf("MENU BANGUN\n");
    printf("##########################\n");
    printf("1. Luas Persegi\n");
    printf("2. Luas Persegi Panjang\n");
    printf("3. Luas Lingkaran\n");
    printf("Masukan kode bangun [1,2,3]: ");
    scanf("%d",&kode_bangun);

    switch(kode_bangun){
        case 1:
        printf("1. Luas Persegi:\n");
        printf("Masukan sisi: ");
        scanf("%d",&sisi);
        luas_persegi = sisi*sisi;
        printf("Luas persegi: %d\n",luas_persegi);
        break;
        case 2:
        printf("2. Luas Persegi Panjang:\n");
        printf("Masukan panjang: \n");
        scanf("%d",&panjang);
        printf("Masukan lebar: \n");
        scanf("%d",&lebar);
        luas_persegi_panjang = panjang*lebar;
        printf("Luas persegi panjang: %d\n",luas_persegi_panjang);
        break;
        case 3:
        printf("3. Luas Lingkaran:\n");
        printf("Masukan jari-jari: \n");
        scanf("%f",&jari_jari);
        luas_lingkaran = 3.14*jari_jari*jari_jari;
        printf("Luas lingkaran: %f\n",luas_lingkaran);
        break;
        default: 
        printf("Kode bangun salah \n");
    }
}