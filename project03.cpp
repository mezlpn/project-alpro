#include <iostream>
using namespace std;

void hitung(double &jumlah, double &rata){
    int data[10] = {2, 5, 1, 2, 4, 6, 3, 2, 7, 1};
    int ukuran = 10;

    int hitung = 0;
    jumlah = 0;

    for(int i = 0; i < ukuran; i++){
        int nilai = data[i];
        if(nilai < 5 || nilai >=7){
            jumlah += nilai;
            hitung++;
        }
    }
    
    if(hitung > 0){
        rata = jumlah / hitung;
    }else{
        rata = 0;
    }
}

int main() {
    double jumlah, rata;
    hitung(jumlah, rata);
    cout << "Jumlah: " << jumlah << endl;
    cout << "Rata-rata: " << rata << endl;
    return 0;
}