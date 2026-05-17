#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int mod = 1e9 + 7;
ll fibo[1002];
void sang(){
	fibo[0]= 0;
	fibo[1]= 1;
	for ( int i = 2; i <= 1002;i++){
		fibo[i] = (fibo[i-1] % mod)+ (fibo[i-2] % mod);
		fibo[i] %= mod;
	}
}

int main(){
	sang();
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << fibo[n] << endl;
	}
}

    

