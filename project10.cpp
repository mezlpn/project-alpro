// #include <iostream>
// using namespace std;

// // ----------- Data Warna ------------
// string warna[13] = {
//     "", // dummy index 0
//     "Orange", "Red-Orange", "Red",
//     "Red-Violet", "Violet", "Blue-Violet",
//     "Blue", "Blue-Green", "Green",
//     "Yellow-Green", "Yellow", "Yellow-Orange"
// };

// // ---- Fungsi Notasi Warna (Primer / Sekunder / Tersier) ----
// string getNotasi(int n) {
//     if (n == 3 || n == 6 || n == 9 || n == 12) return "Primer";
//     if (n == 1 || n == 5 || n == 8 || n == 11) return "Sekunder";
//     return "Tersier";
// }

// // ---- Fungsi Sifat Warna (Hangat / Sejuk) ----
// string getSifat(int n) {
//     // Hangat: 1 - 3 - 11 - 12
//     if (n == 1 || n == 2 || n == 3 || n == 11 || n == 12)
//         return "Hangat";
//     return "Sejuk";
// }

// // ---- Fungsi Perpaduan Analogous ----
// void showAnalogous(int n) {
//     int kiri = (n == 1 ? 12 : n - 1);
//     int kanan = (n == 12 ? 1 : n + 1);

//     cout << "\nPerpaduan Warna Analogous dengan warna nomor " << n << ": ";
//     cout << kiri << ", " << kanan << endl;
// }

// // ---- Fungsi Complementary ----
// void showComplementary(int n) {
//     int comp = n + 6;
//     if (comp > 12) comp -= 12;

//     cout << "\nPerpaduan Warna Complementary dengan warna nomor " << n << ": ";
//     cout << comp << endl;
// }

// // ---- Fungsi Split Complementary ----
// void showSplitComplementary(int n) {
//     int a = n + 5; if (a > 12) a -= 12;
//     int b = n + 7; if (b > 12) b -= 12;

//     cout << "\nPerpaduan Split Complementary: " << a << ", " << b << endl;
// }

// // ---- Fungsi Triadic ----
// void showTriadic(int n) {
//     int a = n + 4; if (a > 12) a -= 12;
//     int b = n + 8; if (b > 12) b -= 12;

//     cout << "\nPerpaduan Warna Triadic: " << a << ", " << b << endl;
// }

// // ---- Fungsi Tetradic ----
// void showTetradic(int n) {
//     int a = n + 3; if (a > 12) a -= 12;
//     int b = n + 6; if (b > 12) b -= 12;
//     int c = n + 9; if (c > 12) c -= 12;

//     cout << "\nPerpaduan Warna Tetradic: " << a << ", " << b << ", " << c << endl;
// }

// int main() {
//     string nama, nim;
//     int pilih;
//     char harmoni;

//     // -------- Input Nama / NIM ----------
//     cout << "Nama : ";
//     getline(cin, nama);
//     cout << "NIM  : ";
//     getline(cin, nim);

//     cout << "\n------------------------------------------------------\n";
//     cout << "Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonisa\n";

//     // -------- Daftar Warna ----------
//     cout << "Warna-warna:\n";
//     for (int i = 1; i <= 12; i++) {
//         cout << i << ". " << warna[i] << endl;
//     }

//     // -------- Input Warna ----------
//     cout << "\nPilihan warna nomor : ";
//     cin >> pilih;

//     if (pilih < 1 || pilih > 12) {
//         cout << "Pilihan tidak valid!\n";
//         return 0;
//     }

//     // -------- Output Notasi + Sifat ----------
//     cout << "\nNotasi warna : " << getNotasi(pilih) << endl;
//     cout << "Sifat warna  : " << getSifat(pilih) << endl;

//     // -------- Menu Perpaduan ----------
//     cout << "\nPerpaduan Warna Harmonis:\n";
//     cout << "a. Analogous\n";
//     cout << "b. Complementary\n";
//     cout << "c. Split Complementary\n";
//     cout << "d. Triadic\n";
//     cout << "e. Tetradic\n";

//     cout << "Pilihan : ";
//     cin >> harmoni;

//     // -------- Output Perpaduan ----------
//     switch (harmoni) {
//         case 'a': showAnalogous(pilih); break;
//         case 'b': showComplementary(pilih); break;
//         case 'c': showSplitComplementary(pilih); break;
//         case 'd': showTriadic(pilih); break;
//         case 'e': showTetradic(pilih); break;
//         default: cout << "Pilihan tidak valid!\n";
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    string nama, nim;
    char ulang;

    cout << "Nama : ";
    getline(cin, nama);
    cout << "NIM  : ";
    getline(cin, nim);

    do {
        int pilih;
        char harmoni;

        system("cls");
        cout << "---------------------------------------------------------------\n";
        cout << " Nama : " << nama << endl;
        cout << " NIM  : " << nim << endl;
        cout << "---------------------------------------------------------------\n\n";

        cout << "Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis\n";
        cout << "Warna-warna:\n";
        cout << "1. Orange         2. Red-Orange   3. Red\n";
        cout << "4. Red-Violet     5. Violet       6. Blue-Violet\n";
        cout << "7. Blue           8. Blue-Green   9. Green\n";
        cout << "10. Yellow-Green  11. Yellow      12. Yellow-Orange\n";

        cout << "\nPilihan warna nomor : ";
        cin >> pilih;

        cout << "\nNotasi warna : ";
        if (pilih == 3 || pilih == 7 || pilih == 11) cout << "Primer";
        else if (pilih == 1 || pilih == 5 || pilih == 9) cout << "Sekunder";
        else cout << "Tersier";

        cout << "\nSifat warna : ";
        if (pilih >= 1 && pilih <= 6) cout << "Hangat";
        else cout << "Sejuk";

        cout << "\n\nPerpaduan Warna Harmonis";
        cout << "\na. Analogous";
        cout << "\nb. Complementary";
        cout << "\nc. Split Complementary";
        cout << "\nd. Triadic Complementary";
        cout << "\ne. Tetrad Complementary";
        cout << "\nPilihan = ";
        cin >> harmoni;
        cout << endl;

        int A, B, C;

        switch (harmoni) {

        case 'a': // ANALOGOUS (3 kemungkinan)
            cout << "Analogous :\n";

            A = pilih + 1; if (A > 12) A -= 12;
            B = pilih + 2; if (B > 12) B -= 12;
            cout << A << ", " << B;

            A = pilih - 2; if (A < 1) A += 12;
            B = pilih - 1; if (B < 1) B += 12;
            cout << "  atau  " << A << ", " << B;

            A = pilih + 1; if (A > 12) A -= 12;
            B = pilih - 1; if (B < 1) B += 12;
            cout << "  atau  " << A << ", " << B;

            break;

        case 'b': // COMPLEMENTARY
            cout << "Complementary :\n";
            A = pilih + 6; if (A > 12) A -= 12;
            cout << A;
            break;

        case 'c': // SPLIT COMPLEMENTARY
            cout << "Split Complementary :\n";
            A = pilih + 5; if (A > 12) A -= 12;
            B = pilih + 7; if (B > 12) B -= 12;
            cout << A << ", " << B;
            break;

        case 'd': // TRIADIC
            cout << "Triadic Complementary :\n";
            A = pilih + 4; if (A > 12) A -= 12;
            B = pilih + 8; if (B > 12) B -= 12;
            cout << A << ", " << B;
            break;

        case 'e': // TETRAD
            cout << "Tetrad Complementary :\n";
            A = pilih + 3; if (A > 12) A -= 12;
            B = pilih + 6; if (B > 12) B -= 12;
            C = pilih + 9; if (C > 12) C -= 12;
            cout << A << ", " << B << ", " << C;
            break;

        default:
            cout << "Pilihan tidak tersedia!";
        }

        cout << "\n\nUlangi (y/t)? ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    return 0;
}
