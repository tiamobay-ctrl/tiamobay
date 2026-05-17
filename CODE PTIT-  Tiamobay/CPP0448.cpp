#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,x; cin >> n >> x ;
		int a[n];
		map<int,int> mp;
		for ( int i = 0; i < n;i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		int ok = 0;
		for(auto it : mp){
			if(it.first == x){
				cout << it.second << endl;
				ok = 1;
				break;
			}
		}
		if(ok == 0) cout << "-1" << endl;
	}  
}

