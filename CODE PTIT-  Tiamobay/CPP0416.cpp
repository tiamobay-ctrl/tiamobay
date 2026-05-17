#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n,k;
		cin >> n >> k;
		ll a[n];
		int cnt = 0;
		for ( int i = 0; i < n;i++) cin >> a[i];
		for ( int i = 0;i < n;i++){
			for ( int j = i + 1; j < n;j++){
				if(a[i] + a[j] == k) cnt++;
			}
		}
		cout << cnt << endl;
	}
}

    

