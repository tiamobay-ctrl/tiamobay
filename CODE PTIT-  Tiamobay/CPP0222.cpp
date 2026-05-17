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
   		int a[n][n];
   		map<int,int> mp;
   		for ( int i = 0; i < n;i++){
   			set<int> s;
   			for ( int j = 0 ; j < n ;j++){
   				int x;
   				cin >> x;
   				s.insert(x);
			}
			for ( int x : s){
				mp[x]++;
			}
		}
		int cnt = 0;
		for (auto it : mp){
			if(it.second == n){
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}


