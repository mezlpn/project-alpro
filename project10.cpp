#include <iostream>
using namespace std;

// ----------- Data Warna ------------
string warna[13] = {
    "", // dummy index 0
    "Orange", "Red-Orange", "Red",
    "Red-Violet", "Violet", "Blue-Violet",
    "Blue", "Blue-Green", "Green",
    "Yellow-Green", "Yellow", "Yellow-Orange"
};

// ---- Fungsi Notasi Warna (Primer / Sekunder / Tersier) ----
string getNotasi(int n) {
    if (n == 3 || n == 6 || n == 9 || n == 12) return "Primer";
    if (n == 1 || n == 5 || n == 8 || n == 11) return "Sekunder";
    return "Tersier";
}

// ---- Fungsi Sifat Warna (Hangat / Sejuk) ----
string getSifat(int n) {
    // Hangat: 1 - 3 - 11 - 12
    if (n == 1 || n == 2 || n == 3 || n == 11 || n == 12)
        return "Hangat";
    return "Sejuk";
}

// ---- Fungsi Perpaduan Analogous ----
void showAnalogous(int n) {
    int kiri = (n == 1 ? 12 : n - 1);
    int kanan = (n == 12 ? 1 : n + 1);

    cout << "\nPerpaduan Warna Analogous dengan warna nomor " << n << ": ";
    cout << kiri << ", " << kanan << endl;
}

// ---- Fungsi Complementary ----
void showComplementary(int n) {
    int comp = n + 6;
    if (comp > 12) comp -= 12;

    cout << "\nPerpaduan Warna Complementary dengan warna nomor " << n << ": ";
    cout << comp << endl;
}

// ---- Fungsi Split Complementary ----
void showSplitComplementary(int n) {
    int a = n + 5; if (a > 12) a -= 12;
    int b = n + 7; if (b > 12) b -= 12;

    cout << "\nPerpaduan Split Complementary: " << a << ", " << b << endl;
}

// ---- Fungsi Triadic ----
void showTriadic(int n) {
    int a = n + 4; if (a > 12) a -= 12;
    int b = n + 8; if (b > 12) b -= 12;

    cout << "\nPerpaduan Warna Triadic: " << a << ", " << b << endl;
}

// ---- Fungsi Tetradic ----
void showTetradic(int n) {
    int a = n + 3; if (a > 12) a -= 12;
    int b = n + 6; if (b > 12) b -= 12;
    int c = n + 9; if (c > 12) c -= 12;

    cout << "\nPerpaduan Warna Tetradic: " << a << ", " << b << ", " << c << endl;
}

int main() {
    string nama, nim;
    int pilih;
    char harmoni;

    // -------- Input Nama / NIM ----------
    cout << "Nama : ";
    getline(cin, nama);
    cout << "NIM  : ";
    getline(cin, nim);

    cout << "\n------------------------------------------------------\n";
    cout << "Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonisa\n";

    // -------- Daftar Warna ----------
    cout << "Warna-warna:\n";
    for (int i = 1; i <= 12; i++) {
        cout << i << ". " << warna[i] << endl;
    }

    // -------- Input Warna ----------
    cout << "\nPilihan warna nomor : ";
    cin >> pilih;

    if (pilih < 1 || pilih > 12) {
        cout << "Pilihan tidak valid!\n";
        return 0;
    }

    // -------- Output Notasi + Sifat ----------
    cout << "\nNotasi warna : " << getNotasi(pilih) << endl;
    cout << "Sifat warna  : " << getSifat(pilih) << endl;

    // -------- Menu Perpaduan ----------
    cout << "\nPerpaduan Warna Harmonis:\n";
    cout << "a. Analogous\n";
    cout << "b. Complementary\n";
    cout << "c. Split Complementary\n";
    cout << "d. Triadic\n";
    cout << "e. Tetradic\n";

    cout << "Pilihan : ";
    cin >> harmoni;

    // -------- Output Perpaduan ----------
    switch (harmoni) {
        case 'a': showAnalogous(pilih); break;
        case 'b': showComplementary(pilih); break;
        case 'c': showSplitComplementary(pilih); break;
        case 'd': showTriadic(pilih); break;
        case 'e': showTetradic(pilih); break;
        default: cout << "Pilihan tidak valid!\n";
    }

    return 0;
}
