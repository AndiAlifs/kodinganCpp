#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;
string nama;
string kelurahan;
long int awal,akhir,biaya,ppj,tarif,jml,ptot;
float pajak;

int main(){
	cout << "Program penghitung pemakaian listrik sederhana" << endl;
	cout << "Masukkan nama : "; getline(cin, nama);
	cout << "Kelurahan : "; getline(cin,kelurahan);
	cout << "Masukkan posisi awal KwH meter : "; cin >> awal;
	cout << "Masukkan posisi akhir KwH meter : "; cin >> akhir;
	cout << "Masukkan biaya beban saat ini : "; cin >> biaya;
	cout << "Masukkan PPJ (Dalam persen) : "; cin >> ppj; pajak=100/ppj;
	jml = akhir - awal; tarif = jml*biaya; ptot=tarif / pajak;
	cout << "===================PLN "<<kelurahan<<"===================" << endl;
	cout << "Nama : " << nama << endl;
	cout << "Kelurahan : " << kelurahan << endl;
	cout << "Pemakaian bulan ini : " << jml << endl;
	cout << "Tarif listrik : Rp " << tarif << ",-" << endl;
	cout << "PPJ " << ppj <<"% : "<< ptot << ",-" << endl;
	cout << "Total bayar : Rp " << tarif + ptot << ",-" << endl;
	cout << "==========================================";
	for (int i=1;i<=kelurahan.length();i++){
		cout << "=";
	}; cout << endl;
	return 0;
};
