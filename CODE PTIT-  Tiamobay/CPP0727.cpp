#include <bits/stdc++.h>
#define MOD 1000000007
#define maxn 100006
#define maxa 102
#define PI 3.141592653589793238
using ll = long long;
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for ( int i = 0; i < n;i++){
			cin >> a[i];
		}
		if (n == 1) {
            cout << a[0] << endl;
            continue;
        }
		long long dp[n];
		dp[0] = a[0];
		dp[1] = max(a[1],a[0]);
		for ( int i =2; i < n;i++){
			dp[i] =max(dp[i-1],dp[i-2] + a[i]);
		}
		cout << dp[n-1] << endl;
	}
}


