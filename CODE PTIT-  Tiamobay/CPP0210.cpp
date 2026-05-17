#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for ( int i = 0; i < n;i++){
			cin >> a[i];
		}
		int min_val = a[0] , res = -1e9;
		for ( int i = 1; i < n;i++){
			if(a[i] > min_val){
				res = max(res, a[i] - min_val);
			}
			min_val = min(a[i],min_val);
		}
		if(res == -1e9) cout << "-1\n";
		else cout << res << endl;
	}
}

