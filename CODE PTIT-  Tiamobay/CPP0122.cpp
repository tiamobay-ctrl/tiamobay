#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
long long gcd(ll a,ll b){
	if ( b == 0) return a;
	return gcd(b,a%b);
}
long long lcm(ll a,ll b){
	return a * b /gcd(a,b);
}int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long res = 1;
		for ( int i = 1; i <= n;i++){
			res = lcm(res,i);
		}
		cout << res << endl;
	}
    return 0;
}

    



