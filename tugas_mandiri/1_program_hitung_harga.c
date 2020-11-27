#include <stdio.h>

int main(){
    int harga,qty,beli;
    float diskon,grandtotal,total_diskon;

    printf("Masukan nilai Harga Barang \n");
    scanf("%d",&harga);

    printf("Masukan nilai Qty \n");
    scanf("%d",&qty);

    beli = harga*qty; 

    if(qty > 100){
        diskon = 0.15*beli;
    }else{
        diskon = 0.05*beli;
    }
    
    grandtotal = beli-diskon;

    printf("Beli %d \n",beli);
    printf("Diskon %.0f \n",diskon);
    printf("Grand Total %.0f \n",grandtotal);
    
}