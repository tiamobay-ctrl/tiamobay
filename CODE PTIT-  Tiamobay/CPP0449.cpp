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
   		int n,x;
   		cin >> n >> x;
   		int a[n];
   		int ans = -1;
   		for ( int i = 0; i < n;i++) cin >> a[i];
		unordered_set<int> s(a,a+n);
		for ( int v : a){
			if(s.count(v-x)){
				ans = 1;
				break;
			}
		}
		cout << ans << endl;	
	}	
}


