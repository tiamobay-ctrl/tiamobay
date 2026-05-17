#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n,m;
		cin >> n >> m;
		int a[n], b[m];
		for ( int i = 0; i < n;i++) cin >> a[i];
		for ( int i = 0; i < m;i++) cin >> b[i];
		sort(b,b+m);
		sort(a,a+n,greater<int>());
		cout << 1ll * a[0] * b[0] << endl;
	}
}

    

