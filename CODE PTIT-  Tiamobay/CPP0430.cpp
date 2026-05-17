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
    	for ( int i = 0; i < n;i++){
    		cin >> a[i];
    		mp[a[i]]++;
		}
    	sort(a,a+n);
    	int l = a[0];
    	int r = a[n-1];
    	int cnt = 0;
    	for ( int i = l; i < r;i++){
    		if(mp[i] == 0) cnt++;
		}	
		cout << cnt << endl;
	}
}



