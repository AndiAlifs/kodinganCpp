#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a,b;
    long int hasil;
    char d;
    hasil=0;
    cin >> a >> b;
    for (int i=1;i<=a*b;i++){
        cin  >> d;
        if (d=='B'){
            hasil++;
        }
    }
    cout << hasil/2 << endl;
    return 0;
}
