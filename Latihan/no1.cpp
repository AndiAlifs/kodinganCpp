#include<iostream>;
using namespace std;
int main(){
	long int hasil;
	hasil=0;
	for (int i=1;i<=21;i++){
		for (int j=1;j<=21;j++){
			if (i==j){continue;} else
			if (((i*j) % 2) == 0){	
				hasil++;};
		}; 
	};
	cout << hasil/2;
}
