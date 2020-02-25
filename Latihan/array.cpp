#include <iostream>
#include <array>
using namespace std;

int main()
{
	int a;
	int i;
	int b;
	int c;
	int d;
	int jih;
	cin >> a;
	long int data[a];
	for (i=1;i<=a;i++) {
		cin >> data[i];
	}
	cin >> b;
	long int hasil[b];
	for (i=1;i<=b;i++) {
		hasil[i]=0;
		cin >> c;
			for (d=1;d<=c;d++){
					cin >> jih;
					hasil[i]=hasil[i] + data[jih];
				}
	}
	for (i=1;i<=b;i++) {
	cout << "Kasus #" << i <<": " << hasil[i] << "\n";
	}
}
