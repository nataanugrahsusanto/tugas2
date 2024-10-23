#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaMahasiswa, jurusan;
    string npm, kode;
    int pembayaranAwal, jumlahCicilan, besarCicilan;
    int pembayaranKe, uangKuliah, uangKuliahTerbayar, sisaUangKuliah;
    char lagi = 'Y';

    // Nampilkan informasi untuk referensi kode
    cout << "Kode - Jurusan\n";
    cout << "SI - Sistem Informasi\n";
    cout << "TI - Teknik Informatika\n";
    cout << "KA - Komputer Akuntansi\n";
    cout << "MI - Manajemen Informatika\n\n";

    while (lagi == 'Y' || lagi == 'y') {
        // Masukan data siswa
        cout << "Nama Mahasiswa: ";
        getline(cin, namaMahasiswa);

        cout << "NPM: ";
        getline(cin, npm);

        cout << "Kode Jurusan (SI/TI/KA/MI): ";
        getline(cin, kode);

        // Tentukan detail pembayaran berdasarkan kode kursus
        if (kode == "SI") {
            jurusan = "Sistem Informasi";
            pembayaranAwal = 2100000;
            jumlahCicilan = 7;
            besarCicilan = 300000;
        } else if (kode == "TI") {
            jurusan = "Teknik Informatika";
            pembayaranAwal = 2500000;
            jumlahCicilan = 7;
            besarCicilan = 300000;
        } else if (kode == "KA") {
            jurusan = "Komputer Akuntansi";
            pembayaranAwal = 1750000;
            jumlahCicilan = 6;
            besarCicilan = 200000;
        } else if (kode == "MI") {
            jurusan = "Manajemen Informatika";
            pembayaranAwal = 1500000;
            jumlahCicilan = 6;
            besarCicilan = 250000;
        } else {
            cout << "Kode Jurusan tidak valid!" << endl;
            continue;
        }

        // Menghitung total biaya kuliah
        uangKuliah = pembayaranAwal + (jumlahCicilan * besarCicilan);

        // Masukan nomor angsuran pembayaran
        cout << "Pembayaran Ke: ";
        cin >> pembayaranKe;

        // Menghitung biaya kuliah yang di bayar
        uangKuliahTerbayar = pembayaranAwal + (pembayaranKe * besarCicilan);

        // Menghitung sisa biaya kuliah
        sisaUangKuliah = uangKuliah - uangKuliahTerbayar;

        // Hasil tampilan
        cout << "\n=== Rincian Pembayaran ===\n";
        cout << "Nama Mahasiswa: " << namaMahasiswa << endl;
        cout << "NPM: " << npm << endl;
        cout << "Jurusan: " << jurusan << endl;
        cout << "Pembayaran Awal: Rp " << pembayaranAwal << endl;
        cout << "Jumlah Cicilan: " << jumlahCicilan << endl;
        cout << "Besar Cicilan: Rp " << besarCicilan << endl;
        cout << "Uang Kuliah: Rp " << uangKuliah << endl;
        cout << "Uang Kuliah Terbayar: Rp " << uangKuliahTerbayar << endl;
        cout << "Sisa Uang Kuliah: Rp " << sisaUangKuliah << endl;

        // Tanyakan apakah penggunan ingin melanjutkan
        cout << "\nMasih ingin menghitung? (Y/T): ";
        cin >> lagi;
        cin.ignore(); // Abaikan karakter baris baru untuk input berikutnya
    }

    cout << "Terima kasih!" << endl;
    return 0;
}
