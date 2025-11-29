#include <iostream>
using namespace std;

void BanyakPecahan(int uang, int pecahan[]){
    int lembar;

    for(int i = 0; i < 9; i++){
        lembar = uang / pecahan[i];
        if(lembar > 0){
            cout << pecahan[i] << " : " << lembar << " lembar" << endl;
            uang = uang - (lembar * pecahan[i]);
        }
    }
}

int main(){
    int uang;
    int pecahan[9] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};

    cout << "Masukkan jumlah uang kembali: ";
    cin >> uang;
    cout << "Jumlah pecahan uang kembali:" << endl;
    BanyakPecahan(uang, pecahan);
}