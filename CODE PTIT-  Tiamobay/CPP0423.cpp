#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,k; cin >> n >> k ;
		int a[n];
		int d = 0;
		for ( int i = 0; i < n;i++){
			 cin >> a[i];
			 if(a[i] <= k) d++;
		}
		int cnt = 0;
		for ( int i = 0; i < d;i++){
			if(a[i] <= k) cnt++;
		}
		int ans = cnt;
		for ( int i = d;i < n;i++){
			if(a[i-d] <= k) cnt--;
			if(a[i] <= k) cnt++;
			ans = max(ans,cnt);
		}
		cout << d - ans << endl;
	}
}


