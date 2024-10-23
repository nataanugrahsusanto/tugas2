#include<iostream>
#include<iomanip>

using namespace std;
 int main () {
 	//declare variables
 	char nama[50], jabatan[20];
 	int golongan, kode_jabatan, gaji = 0, tunjangan = 0, pinjaman, pajak;
 	int total_gaji_kotor, total_gaji_bersih;
 	
 	//input data
 	cout << "masukan nama pegawai:";
 	cin.getline(nama, 50);
 	cout << "masukan golongan(la, lla, llla, lb, llb, lllb):";
 	cin >> golongan;
 	cout << "masukan kode jabatan(dir, sek, wak, stf):";
 	cin >> kode_jabatan;
 	cout << "masukan jumlah pinjaman:";
 	cin >> pinjaman;
 	
 	//set salary based on golongan
 	switch(golongan) {
 		case 1: gaji = 500000; break;
 		case 2: gaji = 750000; break;
 		case 3: gaji = 1000000; break;
 		case 4: gaji = 1500000; break;
 		case 5: gaji = 1750000; break;
 		case 6: gaji = 2500000; break;
 		default: cout << "golongan tiak valid";return 1;
	 }
	 
	 //set tunjangan based on kode_jabatan
	switch(kode_jabatan) {
		case 1: tunjangan = 450000; (jabatan, "direktur"); break;
		case 2: tunjangan = 300000; (jabatan, "sekretaris"); break;
		case 3: tunjangan = 375000; (jabatan, "wakildirektur"); break;
		case 4: tunjangan = 200000; 
		(jabatan, "stafadministrasi"); break;
		default: cout << "kode jabatan tidak valid!"; return 1;
	}
	
	//calculate tax (5% from salary)
	pajak = 0.05 * gaji;
	
	//calculate total gross salary and net salary
	total_gaji_kotor = gaji + tunjangan;
	total_gaji_bersih = total_gaji_kotor - pinjaman - pajak;
	
	//output salary details
	cout << "nama pegawai:" << nama << endl;
	cout << "jabatan:" << jabatan << endl;
	cout << "gaji:" << gaji << endl;
	cout << "tunjangan:" << tunjangan << endl;
	cout << "pajak:" << pajak << endl;
	cout << "total gaji kotor:" << total_gaji_kotor << endl;
	cout << "total gaji bersih:" << total_gaji_bersih << endl;
	
	return 0;
 }
