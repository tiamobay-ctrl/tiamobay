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
		int a[n];
		for ( int i = 0; i < n;i++) cin >> a[i];
		sort(a,a+n);
		for ( int i = 0; i < n;i++) cout << a[i] << " " ;
		cout << endl;
	}
}
