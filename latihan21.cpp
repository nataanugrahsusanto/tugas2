#include<iostream>
#include<iomanip>

using namespace std;

int main() 
{
	float harga,jumlahjual,totalharga,diskon,totalbayar;
char nama[20];

cout<< "KEDE TUAK"<<endl;
cout<<"nama barang: ";
cin>>nama;
cout<<"harga : ";
cin>>harga;
cout<<"jumlah jual : ";
cin>>jumlahjual;

cout<<setprecision(13);
totalharga =harga*jumlahjual;
cout<<"total harga : "<<totalharga<<endl;

diskon=totalharga*0.10;
cout<<"diskon : "<<diskon<<endl;

totalbayar=totalharga-diskon;
cout<<"total harga : "<<totalbayar<<endl;

	cout<<"Total Barang Yang Terjual Di Toko Adalah : "<<totalharga <<endl;
	cout<<"apakah mau lanjut input [Y/T]: ";
	cout<<endl;

	return 0;
	
}
