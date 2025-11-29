#include <iostream>
using namespace std;

void balikUrutanKata(char kalimat[]){
    int panjang = 0;
    int jumlahKata = 0;

    while(kalimat[panjang] != '\0'){
        if(kalimat[panjang] == ' '){
            jumlahKata++;
        }
        panjang++;
    }
    jumlahKata++;

    char kata[jumlahKata][100];
    int Kata = 0;
    int Huruf = 0;

    for(int i = 0; i <= panjang; i++){
        if(kalimat[i] == ' ' || kalimat[i] == '\0'){
            kata[Kata][Huruf] = '\0';
            Kata++;
            Huruf = 0;
        } else {
            kata[Kata][Huruf] = kalimat[i];
            Huruf++;
        }
    }

    for(int i = jumlahKata - 1; i >= 0; i--){
        cout << kata[i];
        if(i != 0){
            cout << " ";
        }
    }
    cout << endl;
}

int main(){
    char kalimat[1000];
    
    cout << "Kalimat = ";
    cin.getline(kalimat, 1000);
    balikUrutanKata(kalimat);
    return 0;    
}