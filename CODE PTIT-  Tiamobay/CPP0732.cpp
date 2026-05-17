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
		int a[n];
		int dp[n];
		for ( int i = 0; i < n;i++){
			cin >> a[i];
			dp[i] = a[i];
		}
		for (int i = 0; i < n;i++){
			for ( int j = 0; j < i;j++){
				if(a[j] < a[i]){
					dp[i] = max(dp[i],dp[j] + a[i]);
				}
			}
		}
		cout << *max_element(dp,dp+n) << endl;
	}
}

