#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main (){
	int a,b,x,k;
	long int hasil;
	cin >> a >> b >> k >> x;
	for (int i=1;i<=k;i++){
		hasil = abs((a*x) + b);
		x = hasil;
	};
	cout << hasil << endl;
}
