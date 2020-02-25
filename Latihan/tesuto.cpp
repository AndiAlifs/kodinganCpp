#
#include<iostream>
#include<string.h>
#include<array>
#include<algorithm>

using namespace std;
int main () {

	char misterius1[10000];
		cin >> misterius1;
	int uang[1000];
	int j=1;

	int x=strlen(misterius1);
	
	for (int i=1;i<=x;i++){
		if (misterius1[i]=='?'){
				uang[j]=i;
				j++;
			} else
		if (misterius1[i]=='*'){
				uang[j]=i;
				j++;
			};
	} 
	for (int i=1;i<=x;i++){
		cout << uang[i] << " ";
}
}
