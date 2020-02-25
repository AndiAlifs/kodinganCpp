#include<iostream>
#include<string.h>
#include<array>
#include<math.h>

using namespace std;
int main(){
	int angka,angk1;
	cin >> angka;
	bool prima[angka];
	int jumlah[angka];
	memset(prima,0,sizeof(prima));
	memset(jumlah,0,sizeof(jumlah));
	prima[1] = true;
	cout << prima[2] << ' ' << prima[1];
}
	
