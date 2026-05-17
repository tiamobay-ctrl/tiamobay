#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std; 
	int main() { 
	int t; cin >> t; 
	while (t--) { 
		int n; cin >> n; 
		vector<int> a(n), b(n); 
		
		for ( int i = 0; i < n;i++) cin >> a[i];
		for ( int i = 0; i < n;i++) cin >> b[i];
		
		unordered_map<int,int> mp;
		int sum  = 0;
		int res = 0;
		
		mp[0] = -1;
		
		for ( int i = 0; i < n;i++){
			sum += a[i] - b[i];
			if(mp.count(sum)){
				res = max(res,i - mp[sum]);
			}
			else{
				mp[sum] = i;
			}
		}
		cout << res << endl;	
	} 
}

