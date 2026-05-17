#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int check(ll n){
	int res = 0;
	for ( int i = 2; i <= sqrt(n);i++){
		int cnt = 0;
		while( n % i == 0){
			cnt++;
			n /= i;
		}	
		if (cnt >= 2) return 0;
		if(cnt == 1) ++res;
	}
	if( n != 1) ++res;
	return res == 3;
}
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		cout << check(n) << endl;
	}
}

    
