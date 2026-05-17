#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
ll check(ll a,ll b, ll m){
	ll res = 1;
	a %= m;
	while(b){
		if(b % 2 == 1){
			res = res * a % m;
		}
		a = a * a % m;
		b /= 2;
	}
	return res;
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    
	int t; cin >> t;
	while(t--){
		
		string a;
		ll b , m;
		cin >> a >> b >> m;
		
		ll a_mod = 0;
		for (char c : a){
			a_mod = (a_mod * 10 + (c-'0')) % m;
		}
		cout << check(a_mod,b,m) << endl;
	}
}


