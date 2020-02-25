#include<iostream>
#include<math.h>

using namespace std;
int main (){
	int a;
	cin >> a;
	long int hasel[a];
	for (int i=1;i<=a;i++){
		long int angka,temp;
		cin >> angka;
		temp = 1 + angka;
		long int akar = sqrt(angka);
		if (angka%akar== 0 ) {
			temp=temp+akar;
		} else 
		for (int j=2;j<=akar;j++){
			if (angka%j == 0){
				temp=temp+j+(angka/j);
			};
		};
		hasel[i]= temp;
	};
	for (int i=1;i<=a;i++){
		cout << "Kasus #" << i << ": " << hasel[i] << endl;
	};
	return 0;
}
