#include <iostream>
using namespace std;

int main(){
    int jk;

    jk = 0; //inputan nilai
    cout << "Dengan IF ELSE" << endl; // tampilkan judul
    if(jk == 0){    //cek apakah nilai jk = 0
        printf("Laki - Laki \n");   //apabila nilai jk = 0 maka cetak "Laki - Laki"
    }else if(jk == 1){  //cek apakah nilai jk = 1
        printf("Perempuan \n"); //apabila nilai jk = 1 maka cetak "Perempuan"
    }else{  //jika kedua kondisi diatas tidak memenuhi
        printf("Belum memilih Jenis kelamin \n"); // tampilkan nilai default apabila kedua kondisi tidak memenuhi
    }
    cout << "" << endl; //baris baru
    cout << "" << endl; //baris baru

    cout << "Dengan SWITCH" << endl; // tampilkan judul

    switch(jk){ // cek nilai jk
        case 0: // apabila nilai jk = 0
        printf("Laki - Laki \n"); //apabila nilai jk = 0 maka cetak "Laki - Laki"
        break; //break / selesaikan apabila kondisi memenuhi
        case 1: // apabila nilai jk = 1
        printf("Perempuan \n"); //apabila nilai jk = 1 maka cetak "Perempuan"
        break; //break / selesaikan apabila kondisi memenuhi
        default: 
        printf("Belum memilih Jenis kelamin \n"); // tampilkan nilai default apabila kedua kondisi tidak memenuhi
    }
}