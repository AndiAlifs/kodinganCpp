#include<iostream>
#include<math.h>

using namespace std;
int main (){
	b:
	long int row,a,b;
	cin >> row;
	a=row/2;
	b=-1;
	for (int i=1;i<=a;i++){
		cout << ' ';
	}; cout << '*' << endl;
	while (a != 0) {
		a--;
		b=b+2;
		for (int i=1;i<=a;i++){
			cout << ' ';
		}; cout << '*';
		for (int i=1;i<=b;i++){
			cout << ' ';
		}; cout << '*' << endl;
	};
	while (a != row/2-1) {
		a++;
		b=b-2;
		for (int i=1;i<=a;i++){
			cout << ' ';
		}; cout << '*';
		for (int i=1;i<=b;i++){
			cout << ' ';
		}; cout << '*' << endl;
	}; a++;
	for (int i=1;i<=a;i++){
		cout << ' ';
	}; cout << '*' << endl;
	
	goto b;
}
