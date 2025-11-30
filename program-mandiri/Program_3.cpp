#include <iostream>
using namespace std;

/*Untuk mempermudah perhitungan, dibuat program komputer yang dapat 
mengonversi suhu dari Celcius ke Fahrenheit, Reamur, dan Kelvin 
secara otomatis hanya dengan memasukkan nilai Celcius.
Pengguna cukup memasukkan suhu dalam Celcius, kemudian program 
akan langsung menampilkan hasil konversinya ke tiga satuan lainnya. 
Setelah selesai, pengguna dapat kembali ke menu untuk menghitung 
lagi atau keluar dari program.*/

float CtoF(float c){ return (c * 9/5) + 32; }
float CtoR(float c){ return c * 4/5; }
float CtoK(float c){ return c + 273.15; }

int main() {
    int pilih;
    float celcius;
    char ulang;

    do {
        cout << "\n========== PROGRAM KONVERSI SUHU ==========\n";
        cout << "1. Konversi Celcius ke Fahrenheit / Reamur / Kelvin\n";
        cout << "2. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        if (pilih == 2) break;

        if (pilih == 1) {
            cout << "Masukkan suhu Celcius: ";
            cin >> celcius;

            cout << "\n--- HASIL KONVERSI ---\n";
            cout << "Fahrenheit = " << CtoF(celcius) << endl;
            cout << "Reamur     = " << CtoR(celcius) << endl;
            cout << "Kelvin     = " << CtoK(celcius) << endl;
        } else {
            cout << "Pilihan tidak valid!\n";
        }

        cout << "\nKembali ke menu (y/t) : ";
        cin >> ulang;
        system("cls");

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nTerima kasih telah menggunakan program konversi suhu!\n";
    return 0;
}

