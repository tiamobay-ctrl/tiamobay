#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
long long fibo[maxn];
void solve(){
	fibo[0] = 0;
	fibo[1] = 1;
	for ( int i = 2; i < 93;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
}
int main(){
	int t; cin >> t;
	solve();
	while(t--){
		ll a,b;
		cin >> a >> b;
		for ( int i = a; i <= b;i++){
			cout << fibo[i];
			if(i < b) cout << " ";
		}
		cout << endl;
	}
}
