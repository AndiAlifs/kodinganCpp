#include <iostream>
#include <string.h>

using namespace std;
int main (){
	int c;
	cin >> c;
	for (int i=1;i<=c;i++){
		bool kenyang=false;
		long int n,m;
		cin >> n >> m;
		long int pemotong[m];
		for (int j=1;j<=m;j++){
			cin >> pemotong[j];
		};
		for (int j=1;j<=m;j++){
			if (pemotong[j]==n){
				kenyang=true;
				break;
			} else
			if (pemotong[j] % pemotong[j+1]==n){
				kenyang=true;
				break;
			} else
			if (pemotong[j+1] % pemotong[j]==n){
				kenyang=true;
				break;
			};
		};
		cout << "Kasus #" << i << ": ";
		if (kenyang==true) {
			cout << "Leeta bisa kenyang!" << endl;
			} else
			cout << "Leeta kelaparan" << endl;
	};
}
