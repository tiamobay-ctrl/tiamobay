#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
void check(ll n){
	for ( int i = 2; i <= sqrt(n);i++){
		if( n % i == 0){
			int cnt = 0;
			while( n % i == 0) {
				cnt ++;
				n /= i;
			}
			cout << i << " "<< cnt << " ";
		}
	}
	if ( n != 1) cout << n << " "<< "1" << endl;
}
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		check(n);
		printf  ("\n");
	}
}

    
