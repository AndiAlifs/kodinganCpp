#include<iostream>
#include<math.h>
using namespace std;

int main (){
	int jumlah,temp,fla;
	cin >> jumlah;
	long int barang[jumlah]; 
	
	// perulangan bwt input barang yg akan diurutkan
	for (int i=1;i<=jumlah;i++){ 
			cin >> barang[i];
	} 
	while (fla){
		fla=0;
		for (int j=1;j<=jumlah;j++){
				if (barang[j]>barang[j+1]){
					temp = barang[j+1];
					barang[j+1] = barang[j];
					barang[j] = temp;
					fla=1;
				}
		} 
	}
	for (int i=1;i<=jumlah;i++){ 
			cout << barang[i] << " ";
	} 
}
