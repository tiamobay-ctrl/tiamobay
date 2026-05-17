#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int nt ( int n){
	for ( int i = 2; i <= sqrt(n);i++){
		if ( n % i == 0) return 0;
	}
	return n > 1;
}
int check(ll n){
	if( n % 2 == 0) return 2;
	for ( int i = 3; i <= sqrt(n);i++){
		if ( n % i == 0) return i;
	}
	return n;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;cin >> n;
		for ( int i = 1; i <= n;i++){
			if( i == 1 ) cout << 1 << " ";
			else if(nt(i)) cout << i << " ";
			else cout << check(i) << " ";
		}	
		cout << endl;
	}
}

    
