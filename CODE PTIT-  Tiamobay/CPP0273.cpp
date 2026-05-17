#include <bits/stdc++.h>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		long long sum = 0;
		for ( int i = 0; i < n;i++){
			cin >> a[i];
			sum += a[i];
		}
		long long l_sum = 0;
		int ans = -1;
		for ( int i = 0; i < n;i++){
			long long r_sum = sum - l_sum -a[i];
			if(l_sum == r_sum){
				ans = i + 1;
				break;
			}
			l_sum += a[i];
		}
		if(ans == -1) cout << "-1" << endl;
		else cout << ans << endl;
	}
}

