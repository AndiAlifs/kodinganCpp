#include <iostream>
#include <iomanip>

using namespace std;

long double kali (long long int a, long long int b){
		long double aku,saya,hasil;aku=a;
		saya=b;
		hasil = aku * saya;
		return hasil;
	}
	
long double bagi (long long int a, long long int b){
		long double aku,saya,hasil;
		aku=a;
		saya=b;
		hasil = aku / saya;
		return hasil;
	}

long double tambah (long long int a, long long int b){
		long double aku,saya,hasil;aku=a;
		saya=b;
		hasil = aku + saya;
		return hasil;
	}		

long double kurang (long long int a, long long int b){
		long double aku,saya,hasil;aku=a;
		saya=b;
		hasil = aku - saya;
		return hasil;
	}
	
int main(){
		long long int a,b;
		char oper;
		cin >> a >> oper >> b;
		long double hasil;
		switch (oper){
			case'x':cout << fixed << setprecision(2) << kali(a,b) << endl;break;
			case'/':cout << fixed << setprecision(2) << bagi(a,b) << endl;break;
			case'-':cout << fixed << setprecision(2) << kurang(a,b) << endl;break;
			case'+':cout << fixed << setprecision(2) << tambah(a,b) << endl;break;
			}
		
	} 
