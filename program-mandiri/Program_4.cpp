#include <iostream>
#include <string>
using namespace std;

/*Dalam sebuah kelas, guru ingin menghitung nilai akhir siswa 
berdasarkan nilai tugas, UTS, dan UAS. Guru ingin memasukkan 
nilai untuk setiap siswa, lalu sistem akan menghitung nilai 
akhir dan menampilkan apakah siswa Lulus atau Tidak. Agar proses 
lebih cepat dan tidak salah hitung, dibuat program sederhana 
untuk mengelola nilai siswa.*/

const int maks = 5;
string nama[maks];
float tugas[maks], uts[maks], uas[maks], akhir[maks];

void inputData() {
    cout << "\n=== INPUT NILAI SISWA ===\n";
    for (int i = 0; i < maks; i++) {
        cout << "Nama siswa ke-" << i + 1 << ": ";
        cin >> nama[i];
        cout << "Nilai Tugas : ";
        cin >> tugas[i];
        cout << "Nilai UTS   : ";
        cin >> uts[i];
        cout << "Nilai UAS   : ";
        cin >> uas[i];

        akhir[i] = (tugas[i] * 0.3) + (uts[i] * 0.3) + (uas[i] * 0.4);
        cout << endl;
    }
}

void tampilData() {
    cout << "\n=== DAFTAR NILAI SISWA ===\n";
    for (int i = 0; i < maks; i++) {
        cout << nama[i] << "\t";
        cout << "Akhir: " << akhir[i] << "\t";
        if (akhir[i] >= 50){
			cout << "Status: Lulus";
		}else{
			cout << "Status: Tidak Lulus";
			cout << endl;
		}
    }
}

int main() {
    int pilih;
    do {
        cout << "\n========== MENU NILAI SISWA ==========\n";
        cout << "1. Input Nilai Siswa\n";
        cout << "2. Tampilkan Hasil\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        switch(pilih) {
            case 1:
				system("cls");
                inputData();
                system("pause");
                
                system("cls");
                break;
            case 2:
				system("cls");
                tampilData();
                system("pause");
                
                system("cls");
                break;
            case 3:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }

    } while(pilih != 3);

    return 0;
}
