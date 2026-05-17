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
		cin >> n ;
		int a[n],b[n];
		for ( int i = 0; i < n;i++) cin >> a[i];
		for ( int i = 0; i < n;i++){
			b[i] = a[i];
		}
		sort(a,a+n);
		sort(b,b+n,greater<int>());
		for ( int i = 0; i < n/2;i++) cout << b[i] << " " << a[i] << " ";
		if ( n % 2 == 1) cout << b[(n+1)/2-1];
		cout << endl;
	}
}
