#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	char lagi='Y';
	int jlhdata,jlhbarng,ttlpenjualan=0;
	
	while(lagi=='Y'||lagi=='y'){
	

		cout<<"Masukkan Jumlah Barang Yang Terjual Di Toko "<<": ";
		cin>>jlhbarng;
		
		ttlpenjualan += jlhbarng;//<--rumus disingkat dari(ttlpenjualan=ttlpenjualan+jlhbarng)
	
	cout<<"Total Barang Yang Terjual Di Toko Adalah : "<<ttlpenjualan <<endl;
	cout<<"apakah mau lanjut input [Y/T]: ";
	cout<<endl; 
}
	return 0;
}
