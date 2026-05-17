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
        int n;
        cin >> n ;
        ll a[n+5];
        map<ll,ll> mp;
        int cnt = 0;
		for ( int i = 0; i < n;i++){
			cin >> a[i];
			mp[a[i]] = mp[a[i]] + 1; 
		}
		for(auto it : mp){
			if(it.second > 1){
				cnt += it.second;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}
