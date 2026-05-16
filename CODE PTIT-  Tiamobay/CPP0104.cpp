#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	ll n; cin >> n;
	ll tong = 1;
	for ( int i = 2; i <= n;i++){
		ll nhan = 1;
		for (int j = 1; j <= i;j++){
			nhan *= j;
		}
		tong += nhan; 
	}
	cout << tong;
}
