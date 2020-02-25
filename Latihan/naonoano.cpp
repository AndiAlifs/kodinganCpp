#include <iostream>
#include <string.h>
using namespace std;
int main()
{  
	char makan1[1000];
	char makan2[1000];
	cin >> makan1;
	cin >> makan2;
	
    if(strstr(makan1,makan2)==0)
		cout << "NO\n" ;
    else
		cout <<"YES\n";
    return 0;
}
