#include<iostream>

using namespace std;
void clears(){
	for (int i=1;i<=90;i++){
		cout << endl;
	};
}
int main (){
	a:
	string un,ps;
	cout << "======================================" << endl;
	cout << "| SMAN 4 KENDARI INFORMATICS PROGRAM |" << endl;
	cout << "======================================" << endl ;
	cout << "Masukkan Username : " ;
	cin >> un;
	cout << "Masukkan Password : " ;
	cin >> ps;
	cout << endl;

	if (un == "smanpat") {
		if (ps == "routegalaxy"){
			cout << "LOGIN TELAH BERHASIL \(^o^)/" << endl;
			cout << "SELAMAT MENGGUNAKAN...., Tekan ENTER Untuk Melanjutkan!!" << endl;
			system("pause");
			goto ex;
		} else {
		cout << "PASSWORD SALAH T_T SILAHKAN COBA LAGI!!, Tekan ENTER Untuk melanjutkan!" << endl << endl << endl;
		system("pause");
		system("cls");
		goto a;
		}
	} else {
	cout << "USERNAME SALAH DAN USERNAME T_T SILAHKAN COBA LAGI!!, Tekan ENTER untuk melanjutkan!!" << endl << endl << endl;
	system("pause");
	system("cls");
	goto a;
	}
}
