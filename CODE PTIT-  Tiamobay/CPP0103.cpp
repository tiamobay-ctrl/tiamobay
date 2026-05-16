#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	ll n; cin >> n;
	double tong = 0;
	for ( int i = 1; i <= n;i++){
		tong += 1.0 / i;
	}
	cout << fixed << setprecision(4) << tong << endl;
}
