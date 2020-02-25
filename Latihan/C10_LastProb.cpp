#include<iostream>
#include<math.h>

using namespace std;
long int kedekatan(long int a,long int b,long int c,long int d,long int cons){
		long int suku1,suku2;
		suku1 = pow((a - c),cons);
		if (suku1 < 0){
			suku1=suku1*(-1);};
		suku2 = pow((b - d),cons);
		if (suku2 < 0){suku2=suku2*(-1);};
		return suku1 + suku2;
		
	}

int main (){
	long int n,d,besar,kecil;
	besar=-1000000000;
	kecil=1000000000;
	cin >> n >> d;
	long int x[n],y[n];
	for (int i=1;i<=n;i++){
		cin >> x[i] >> y[i];
	};
	for (int i=1;i<=n;i++){
		for (int j=i+1;j<=n;j++){	
			if(kedekatan(x[i],y[i],x[j],y[j],d) < kecil){
				kecil=kedekatan(x[i],y[i],x[j],y[j],d);
			};
			if(kedekatan(x[i],y[i],x[j],y[j],d) > besar){
				besar=kedekatan(x[i],y[i],x[j],y[j],d);
			};
		};
	};
	cout << kecil << ' '<< besar << endl;
}
