#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long a;
	cin >> a;
	long long int b[a];
	long long int hasil[a];
	
	//kasih masuk angka yang mau dicari jumlah faktornya
	for (long long int i=1; i<=a; i++) {
			cin >> b[i];
		}
	//perulangan untuk iterasi array yang mau di cari faktornya
	for (long long int i=1; i<=a; i++) {
			hasil[i] = 1 + b[i];
			//pencarian faktor dari array i
			for (long long int d=2;d<=sqrt(b[i]);d++){
					if (b[i]%d == 0) {
							if (b[i]/d==d) {
									hasil[i]=hasil[i]+d;
								} else
							hasil[i]=hasil[i]+d+b[i]/d;
						}
				}
		}
	for (long long int i=1;i<=a;i++) {
		cout << "Kasus #" << i << ": " << hasil[i] << endl;
	}
}
