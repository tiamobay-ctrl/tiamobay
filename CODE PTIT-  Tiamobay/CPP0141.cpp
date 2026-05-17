#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
map<ll,ll> mp;
void sang(){
	
	ll fibo[100];
	fibo[0]= 0;
	fibo[1]= 1;
	for ( int i = 2; i < 92;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for ( int i = 0; i < 92;i++){
		mp[fibo[i]]++;
	}
}

int main(){
	sang();
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		if(mp[n]) cout <<"YES\n";
		else cout << "NO\n";
	}
}

    

