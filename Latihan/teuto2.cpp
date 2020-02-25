#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;
long int angk1;

long int brute (long int aku){
	int temp=0;
	while (angk1%aku==0){
		angk1 = angk1 / aku;
		temp++;
	};
	return temp;
}

bool cekprim (long int a){
	int temp;
	temp=0;
		for (int j=2;j<=sqrt(a);j++){
			if (a%j==0){
				temp=1;
				break;
			};
		};
	if (temp==1){
		return false;
	} else return true;		
}

int main(){
	long int angka;
	bool betes = 0;
	cin >> angka;
	if (cekprim(angka) == 1){
		betes = 1;
	};
	if (betes != 1){
		angk1 = angka;
		bool prima[angka];
		long int jumlah[angka];
		memset(prima,0,sizeof(prima));
		memset(jumlah,0,sizeof(jumlah));
		for (long int i =2;i<=angka;i++){
			if (cekprim(prima[i])==true){
				prima[i]=1;
			} else
			prima[i] = 0;
		};
		for (long int i=2;i<=angka;i++){
			if (prima[i]==1){
				jumlah[i]=brute(i);
			};
		};
		long int point;
		
		for (long int i=angka;i>=2;i--){
			if (jumlah[i] >=1 && prima[i]==1){
				point = i;
				break;	
			};
		};
		for (long int i=2;i<=point;i++){
			if (jumlah[i] > 1 && i==point) {
				cout << i << '^' << jumlah[i] << endl;
			} else
			if (jumlah[i] == 1 && i==point) {
				cout << i << endl;
			} else
			if (jumlah[i] > 1) {
				cout << i << '^' << jumlah[i] << " x ";
			} else
			if (jumlah[i] == 1) {
				cout << i << " x ";
			};
		};
	} else {
	cout << angka << endl;
	}
};
