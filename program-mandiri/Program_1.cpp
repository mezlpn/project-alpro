#include <iostream>
using namespace std;

/*Pada sebuah toko roti, setiap varian memiliki harga berbeda. 
Kasir sering kesulitan menghitung total belanja pelanggan karena 
harus menjumlahkan pembelian setiap jenis roti secara manual. 
Untuk menyederhanakan proses pembayaran, dibuat program penjualan yang 
menginput jumlah pembelian setiap jenis roti dan menghitung total harga. 
Jika total pembelian melewati Rp 50.000, pelanggan mendapatkan bonus roti gratis.*/

int main() {
    string roti[] = {"Coklat", "Keju", "Sosis", "Abon", "Pandan"};
    int harga[] = {7000, 8000, 12000, 11000, 9000};
    int jumlah[5], total = 0;
    char ulangi;
    
    do{
		cout << "=== Sistem Penjualan Toko Roti ===\n";
		for(int i = 0; i < 5; i++){
			cout << "Berapa roti " << roti[i] << " yang dibeli? : ";
			cin >> jumlah[i];
			total += jumlah[i] * harga[i];
		}

		cout << "\nTOTAL PEMBAYARAN = " << total << endl;
		if(total > 50000) cout << "Bonus: 1 roti gratis!\n";
		
		cout <<"\nApakah anda ingin membeli lagi (y/t)? : ";
		cin >> ulangi;
		
		system("cls");
	}while(ulangi == 'y' || ulangi == 'Y');
	
	return 0;
}

