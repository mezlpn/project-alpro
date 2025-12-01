#include <iostream>
#include <string>
using namespace std;

/*
Sebuah perusahaan kecil dengan jumlah karyawan yang cukup banyak sering mengalami
kesulitan dalam mencatat jadwal kerja dan absensi harian. Banyak data yang hilang,
salah catat, atau sulit dicari kembali karena semuanya masih dicatat di buku manual.

Untuk mengatasi masalah ini, dibuatlah sebuah program sederhana yang dapat
mencatat data karyawan, shift kerja masing-masing, melakukan absensi harian,
serta menampilkan rekap kehadiran setiap karyawan. Sistem ini membantu admin
mencari data dengan cepat dan menjaga informasi tetap rapi serta terstruktur.
*/

struct Karyawan {
    string nama;
    string id;
    string shift;
    int hadir = 0, izin = 0, sakit = 0;
};

Karyawan dataKaryawan[50];
int totalKaryawan = 0;

void tambahKaryawan() {
    int n;
    cout << "Jumlah karyawan yang ingin ditambahkan: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nNama: ";
        cin >> dataKaryawan[totalKaryawan].nama;
        cout << "ID: ";
        cin >> dataKaryawan[totalKaryawan].id;
        cout << "Shift (Pagi/Siang/Malam): ";
        cin >> dataKaryawan[totalKaryawan].shift;
        totalKaryawan++;
    }
}

void tampilkanData() {
    if(totalKaryawan == 0) {
        cout << "Belum ada data karyawan.\n";
        return;
    }

    cout << "\n=== DATA KARYAWAN ===\n";
    for(int i = 0; i < totalKaryawan; i++) {
        cout << i+1 << ". " << dataKaryawan[i].nama << " | ID: " << dataKaryawan[i].id << " | Shift: " << dataKaryawan[i].shift << endl;
    }
}

int cariID(string id) {
    for(int i = 0; i < totalKaryawan; i++) {
        if(dataKaryawan[i].id == id) return i;
    }
    return -1;
}

void absensi() {
    string id;
    cout << "Masukkan ID karyawan: ";
    cin >> id;

    int idx = cariID(id);
    if(idx == -1) {
        cout << "ID tidak ditemukan.\n";
        return;
    }

    int pilih;
    cout << "1. Hadir\n2. Izin\n3. Sakit\nPilih: ";
    cin >> pilih;

    if(pilih == 1) dataKaryawan[idx].hadir++;
    else if(pilih == 2) dataKaryawan[idx].izin++;
    else if(pilih == 3) dataKaryawan[idx].sakit++;
    else cout << "Pilihan tidak valid.\n";
}

void rekap() {
    string id;
    cout << "Masukkan ID karyawan: ";
    cin >> id;

    int idx = cariID(id);
    if(idx == -1) {
        cout << "ID tidak ditemukan.\n";
        return;
    }

    cout << "\n=== REKAP ABSENSI ===\n";
    cout << "Nama: " << dataKaryawan[idx].nama << endl;
    cout << "Hadir: " << dataKaryawan[idx].hadir << endl;
    cout << "Izin: " << dataKaryawan[idx].izin << endl;
    cout << "Sakit: " << dataKaryawan[idx].sakit << endl;
}

int main() {
    int pilih;
    do {
        cout << "\n=== MENU UTAMA ===\n";
        cout << "1. Tambah Karyawan\n";
        cout << "2. Tampilkan Data\n";
        cout << "3. Absensi Harian\n";
        cout << "4. Rekap Absensi\n";
        cout << "5. Keluar\n";
        cout << "Pilih: ";
        cin >> pilih;

        switch(pilih) {
            case 1: tambahKaryawan(); break;
            case 2: tampilkanData(); break;
            case 3: absensi(); break;
            case 4: rekap(); break;
            case 5: cout << "Program selesai.\n"; break;
            default: cout << "Pilihan tidak valid.\n";
        }

    } while(pilih != 5);

    return 0;
}
