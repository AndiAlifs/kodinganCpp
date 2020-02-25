#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;
int main(){
	long int tc,temp;
	cin >> tc;
	bool fla;
	long int angka[tc];
	for (int i=1;i<=tc;i++){
		cin >> angka[i];
	};
	fla =1;
	while (fla){
		fla=0;
		for (int i=1;i<=tc-1;i++){
			if (angka[i] > angka[i+1]){
				temp = angka[i];
				angka[i] = angka[i+1];
				angka[i+1] = temp;
				fla=1;
			};
		};
	};
	for (int i=1;i<=tc;i++){
		cout << angka[i] << endl;
	};
};
