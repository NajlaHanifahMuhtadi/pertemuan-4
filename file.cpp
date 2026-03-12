#include <iostream>
using namespace std;

int arr [20];   //membat array dengan panjang data 20
int n;         //membuat variabel inputan n

void input (){      //Membuat fungsi bernama input. void berarti fungsi tidak mengembalikan nilai.
    while (true){   //Karena menggunakan while(true), program akan terus meminta input n tanpa berhenti
        cout << "Masukkan Jumlaah Data pada Array : ";      //Menampilkan pesan ke layar agar pengguna memasukkan jumlah data array.
        cin >> n;          //Nilai yang dimasukkan disimpan ke variabel n

        if (n <= 20){       //Jika nilai n kurang dari atau sama dengan 20, maka 
            break;          //break akan menghentikan perulangan while
        }
        else{
            cout << "\nArray Tidak Boleh Lebih dari 20\n";  //Jika n lebih dari 20, program menampilkan pesan
        }                                                   //Setelah itu program kembali ke awal while dan meminta input lagi
    }
}