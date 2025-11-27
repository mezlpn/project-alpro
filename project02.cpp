#include <iostream>
using namespace std;

// Function untuk memproses dan menampilkan kalimat dengan urutan kata terbalik
void balikUrutanKata(char kalimat[]) {
    int panjang = 0;
    int jumlahKata = 0;
    
    // Menghitung panjang kalimat dan jumlah kata
    while (kalimat[panjang] != '\0') {
        if (kalimat[panjang] == ' ') {
            jumlahKata++;
        }
        panjang++;
    }
    jumlahKata++; // Kata terakhir
    
    // Array untuk menyimpan kata-kata
    char kata[jumlahKata][100];
    int indexKata = 0, indexKarakter = 0;
    
    // Memisahkan kata-kata
    for (int i = 0; i <= panjang; i++) {
        if (kalimat[i] == ' ' || kalimat[i] == '\0') {
            kata[indexKata][indexKarakter] = '\0'; // Akhiri kata
            indexKata++;
            indexKarakter = 0;
        } else {
            kata[indexKata][indexKarakter] = kalimat[i];
            indexKarakter++;
        }
    }
    
    // Menampilkan kata-kata dalam urutan terbalik
    cout << "hasil = ";
    for (int i = jumlahKata - 1; i >= 0; i--) {
        cout << kata[i];
        if (i > 0) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    char kalimat[1000];
    
    // Input kalimat
    cout << "kalimat = ";
    cin.getline(kalimat, 1000);
    
    // Memanggil function untuk memproses dan menampilkan hasil
    balikUrutanKata(kalimat);
    
    return 0;
}