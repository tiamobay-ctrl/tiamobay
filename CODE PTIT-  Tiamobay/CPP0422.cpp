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
		ll n;
		cin >> n;
		ll a[n];
		for ( int i = 0; i < n;i++) cin >> a[i];
		int cnt = 0;
		for ( int i = 0; i < n;i++){
			if(a[i] == 0) {
				cnt++;
			}
			else cout << a[i] << " ";
		}
		for ( int i = 0; i < cnt ;i++){
			cout << "0" << " ";
		}
		cout << endl;
	}
}

    

