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
    cout << endl;   //Membuat baris kosong
    cout << "=============================================";
    cout << "============Masukkan Element Array===========";
    cout << "=============================================";

    for (int i = 0; i < n; i++ ){       //Membuat perulangan (loop). int i = 0 → variabel penghitung dimulai dari 0. i < n → perulangan berjalan selama i masih kurang dari n
        cout << "Data ke-" << (i+1) << " : ";   //(i+1) digunakan supaya nomor data dimulai dari 1, bukan dari 0.
        cin >> arr[i];      //Nilai yang dimasukkan disimpan ke array pada indeks ke-i.
    }
}

void insertionsort(){       //prosedur insertion sort
    int temp;
    int j;

    for (int i = 0; i < n; i++){
        temp = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        cout << "\nStep" << i << ": ";
        for (int k = 0; k < n; k++){
            cout << arr[k] << " ";
        }
    }
}

void display(){
    cout << endl;
    cout << "\n=============";
    cout << "\nElement Array << endl";
    cout << "\n=============";

    for(int j = 0; j < n; j++){
        cout << arr[j] << endl;
    }
    cout <<endl;
}