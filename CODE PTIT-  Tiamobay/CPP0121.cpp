#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long gcd(ll a,ll b){
	if ( b == 0) return a;
	return gcd(b,a%b);
}
long long lcm(ll a,ll b){
	return a * b /gcd(a,b);
}

int main(){
	ll t;
	cin >> t;
	while(t--){
		ll a,b;
		cin >> a >> b;
		ll c = lcm(a,b);
		ll d = gcd(a,b);
		cout << c << " " << d  << endl;
	}
  return 0;
}

    
