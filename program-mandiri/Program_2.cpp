#include <iostream>
#include <string>
using namespace std;

int main() {
    const int jumlahMeja = 6;
    int kapasitas[jumlahMeja] = {2, 4, 2, 2, 2, 4};
    string meja[jumlahMeja][4];
    int hargaReservasi = 60000;

    for (int i = 0; i < jumlahMeja; i++)
        for (int j = 0; j < kapasitas[i]; j++)
            meja[i][j] = "-";
    
    int menu;
    do {
        cout << "\n=========== SISTEM RESERVASI RESTORAN ===========\n";
        cout << "1. Tampilkan Denah Meja\n";
        cout << "2. Reservasi Meja\n";
        cout << "3. Cari Pengunjung\n";
        cout << "4. Laporan Reservasi\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> menu;
        
        switch(menu) {
        case 1: {
            cout << "\n=========== DENAH MEJA RESTORAN ===========\n";
            for (int i = 0; i < jumlahMeja; i++) {
                cout << "Meja " << i + 1 << " (" << kapasitas[i] << " kursi) : [ ";
                for (int j = 0; j < kapasitas[i]; j++)
                    cout << (meja[i][j] == "-" ? "O" : "X") << " ";
                cout << "]\n";
            }
            break;
        }
        
        case 2: {
            string nama;
            int noMeja;
            
            cout << "\nNama Pengunjung: ";
            cin >> nama;
            cout << "Pilih Nomor Meja (1-6): ";
            cin >> noMeja;
            noMeja--;
            
            if (noMeja < 0 || noMeja >= jumlahMeja) {
                cout << "Nomor meja tidak valid!\n";
                break;
            }
            
            
            bool sudahTerisi = (meja[noMeja][0] != "-");
            if (sudahTerisi) {
                cout << "Meja sudah dipesan oleh: " << meja[noMeja][0] << endl;
                break;
            }
            
            
            for (int i = 0; i < kapasitas[noMeja]; i++)
                meja[noMeja][i] = nama;
            
            cout << "Reservasi Meja " << noMeja + 1 << " berhasil!\n";
            
            system("pause");
            
            system("cls");
            break;
        }

        case 3: {
            string cari;
            bool ditemukan = false;

            cout << "\nMasukkan nama pengunjung: ";
            cin >> cari;

            for (int i = 0; i < jumlahMeja; i++)
                if (meja[i][0] == cari) {
                    cout << "Pengunjung ditemukan di Meja " << i + 1 << endl;
                    ditemukan = true;
                }

            if (!ditemukan) cout << "Nama tidak ditemukan.\n";
            
            system("pause");
            
            system("cls");
            break;
        }

        case 4: {
            int mejaTerisi = 0;
            for (int i = 0; i < jumlahMeja; i++)
                if (meja[i][0] != "-") mejaTerisi++;

            int pendapatan = mejaTerisi * hargaReservasi;

            cout << "\n=========== LAPORAN RESERVASI ==========\n";
            cout << "Meja Terisi : " << mejaTerisi << endl;
            cout << "Meja Kosong : " << jumlahMeja - mejaTerisi << endl;
            cout << "Pendapatan  : Rp " << pendapatan << endl;
            
            system("pause");
            
            system("cls");
            break;
        }

        case 5:
            cout << "\nTerima kasih telah menggunakan sistem reservasi!\n";
            break;

        default:
            cout << "Menu tidak tersedia!\n";
            system("pause");
            system("cls");
        }

    } while(menu != 5);

    return 0;
}
