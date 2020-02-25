#
#include<iostream>
#include<string.h>
#include<array>
#include<algorithm>

using namespace std;
int main () {

	char magis1[26];
	char misterius1[10000];
		cin >> magis1 >> misterius1;
	int uang[1000];
	int j=1;

	for (int i=1;i<=misterius;i++){
		if (misterius[i]='?'){
				uang[j]=i;
				j++;
			} else
		if (misterius[i]='*'){
				uang[j]=i;
				j++;
			};
	} 
	for (int i=1;i<=misterius;i++){
		cout << j[i] << " ";
}
}
