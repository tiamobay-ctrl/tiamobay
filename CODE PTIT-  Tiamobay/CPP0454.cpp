#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std; 
int main(){
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    ll a[n];
	    for ( int i = 0; i < n;i++){
	    	cin >> a[i];
	    	a[i] = 1ll * a[i] * a[i];
		}
		sort(a,a+n);
		int ok = 0;
		for ( int k = n - 1;  k >= 2;k--){
			int l = 0;
			int r = k -1;
			while(l < r){
				if(a[l] + a[r] == a[k]){
					ok = 1;
					break;
				}
				else if(a[l] + a[r] < a[k]){
					l++;
				}
				else r--;
				if(ok) break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}

