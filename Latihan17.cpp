#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char nampeg[30];
    long double penjualan;
    long double komisi;
    long double ttlkomisi = 0;  //long double untuk angka atau nominal besar
    
    cout << "PT INDOMIE NYEMEK" << endl;
    cout << "HASIL PENJUALAN PEGAWAI DAN BONUS KOMISINYA " << endl;
    cout << "===================================" << endl;
    
    for (int i = 0; i < 10; i++) {
        cout << "NAMA PEGAWAI " << i + 1 << ": ";
        cin >> nampeg;
        cout << "JUMLAH PENJUALAN PEGAWAI : ";
        cin >> penjualan;
        

        if (penjualan < 500000) {
            komisi = 0;
        } else if (penjualan >= 500000 && penjualan < 500001) {
            komisi = penjualan * 0.10;
        } else {
            komisi = (500000 * 0.10) + (penjualan - 500000) * 0.15;
        }
        
        cout << setprecision(13);
        cout << "BONUS KOMISI PEGAWAI " << i + 1 << ": " << komisi << endl;
        
        ttlkomisi += komisi; 
    }
    
    cout << "TOTAL KOMISI YANG HARUS DIBAYAR PERUSAHAAN: " << ttlkomisi << endl;
	return 0;
}
