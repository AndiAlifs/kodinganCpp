#include<iostream>
using namespace std;

int main () {
	int a,j,d;
	j=0;
	cin >> a;
	while (j<a/2){
		d=2;
		while (d<=a*2){
			cout << d << ends;
			d=d+2;
		};
		cout << endl;
		j++;
	}
}
