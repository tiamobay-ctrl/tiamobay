#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,x; cin >> n >> x;
		ll a[n];
		for ( int i = 0; i < n;i++){
			cin >> a[i];
		}
		long long ans = 1e9;
		ll l = 0, sum = 0;
		for (ll r = 0;r < n;r++){
			sum += a[r];
			while(sum > x){
				ans =min(ans,r-l+1);
				sum -= a[l];
				l++;
			}
		}
		if(ans == 1e9) cout << "-1" << endl;
		else cout << ans << endl;
	}
}


