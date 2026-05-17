#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int nt(int n){
	for ( int i = 2; i * i <= n;i++){
		if ( n % i == 0) return 0;
	}
	return n > 1;
}
long long phi( long long n){
	long long res = n;
	for ( int i = 2; i <= sqrt(n);i++){
		if( n % i == 0){
			while( n % i == 0){
				n/= i;
			}
				res = res / i * (i-1);
		}
	}
	if ( n > 1) res = res / n * (n -1);
	return res;
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long x = phi(n);
		if ( nt(x)) cout << "1\n";
		else cout << "0\n";
	}
}
	    
    
    
    


