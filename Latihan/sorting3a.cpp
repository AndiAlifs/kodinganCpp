#include<iostream>
#include<math.h>
using namespace std;

int main (){
	long long int kasus,jumlah,maks,temp,flag;
	cin >> kasus ;
	
	//perulangan uji kasus
	for (long long int i=1;i<=kasus;i++){
		cin >> jumlah >> maks;
		long long int barang[jumlah],sum,hasil;
		sum=0;
		hasil=0;
		
		//input array
		for (long long int j=1;j<=jumlah;j++){
			cin >> barang[j];
		}
		
		//memulai pengurutan
			while (flag){
				flag=0;
				for (long long int k=1;k<=jumlah;k++){
					if (barang[k] > barang[k+1]){
						temp = barang[k];
						barang[k]=barang[k+1];
						barang[k+1]=temp;
						flag=1;
					}
				}
			}
			for (long long int j=1;j<=jumlah;j++){
				if (sum + barang[j] <= maks){
					sum=sum+barang[j];
					hasil++;
				} else break;
			}
		cout << hasil << endl;
		}
}
