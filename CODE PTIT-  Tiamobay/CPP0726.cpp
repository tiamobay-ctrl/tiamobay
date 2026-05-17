#include <bits/stdc++.h>
#define MOD 1000000007
#define maxn 100006
#define maxa 102
#define PI 3.141592653589793238
using ll = long long;
using namespace std;
long long a,b,c;
void solve(){
	a = a % c;
	long long ans = 0;
	while(b){
		if( b % 2 == 1){
			ans = (ans + a) % c;
		}
		a = (a*2) % c;
		b /= 2;
	}
	cout << ans << endl;
}
int main(){
	int t; cin >> t;
	while(t--){
		cin >> a >> b >> c;
		solve();
	}
}

