#include <iostream>
using namespace std;

void konversiMm(int mm, int &km, int &m, int &cm, int &sisaMm){
    km = mm / 1000000;
    int sisaKm = mm % 1000000;
    m = sisaKm / 1000;
    int sisaM = sisaKm % 1000;
    cm = sisaM / 10;
    sisaMm = sisaM % 10;
}

int main(){
    int bilangan, km, m, cm, mm;

    cout << "bilangan (dalam mm) = ";;
    cin >> bilangan;

    konversiMm(bilangan, km, m, cm, mm);

    cout << "hasil konversi = " << km << " km, " << m << " m, " << cm << " cm, " << mm << " mm" << endl;
    return 0;
}