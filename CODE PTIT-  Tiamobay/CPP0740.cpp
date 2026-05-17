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
		}
		long long ans = -1e9;
		for ( int i = 0; i < n;i++){
			ll tmp = 1;
			for ( int j = i; j < n;j++){
				tmp *= a[j];
				ans = max(ans,tmp);
			}
		}
		cout << ans << endl;
	}
}


