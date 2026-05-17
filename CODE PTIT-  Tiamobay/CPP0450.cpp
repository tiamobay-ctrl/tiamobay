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
    	map<int,int> mp;
    	for ( int i = 0; i < n ;i++){
    		cin >> a[i];
		}
		int ok = 0;
		for ( int i = 0; i < n;i++){
			mp[a[i]]++;
			if(mp[a[i]] >= 2){
				cout << a[i];
				ok  = 1;
				break;
			}
		}
		if(ok == 0) cout << -1 << endl;
		else cout << endl;
	}
}




