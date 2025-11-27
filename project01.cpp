#include <iostream>
using namespace std;

int main(){
    int i=0;
    int nilai[10];
    
    while(i<10){
        cout << "Masukkan nilai ke-" << (i+1) << ": ";
        cin >> nilai[i];
        i++;
    }

    i=0;
    int nilaiMax = nilai[0];
    while(i<10){
        if(nilai[i] > nilaiMax){
            nilaiMax = nilai[i];
        }
        i++;
    }

    i=0;
    int hitung = 0;
    while(i<10){
        if(nilai[i] == nilaiMax){
            hitung++;
        }
        i++;
    }
    cout << "Nilai tertinggi adalah: " << nilaiMax << endl;
    cout << "Banyaknya mahasiswa memiliki nilai tertinggi: " << hitung << endl;
}