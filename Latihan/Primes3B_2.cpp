#include<iostream>
#include<string.h>
#include<array>
#include<math.h>

using namespace std;
int cekprim (long int a){
	int temp;
	temp=0;
		for (int j=2;j<=sqrt(a);j++){
			if (a%j==0){
				temp=1;
				break;
			};
		};
	if (temp==1){
		return 1;
	} else return 0;		
}

int main () {
	long int abu,m,n;
	cin >> abu;
	for (int i=1;i<=abu;i++){
		cin >> m >> n;
		for (int j=m;j<=n;j++){
			if (j==1){
				continue;
			} else	
			if (cekprim(j)==0) {
				cout << j << endl;
			};
		};
		cout << endl;	
	};
}
	
