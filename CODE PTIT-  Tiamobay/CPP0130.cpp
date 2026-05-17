#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
void check(ll n){
	for ( int i = 2;i <= sqrt(n);i++){
			while( n % i == 0){
				cout << i << " ";
				n /= i;
			}
			if ( n == 1) break;
		}
	if ( n > 1) cout << n;
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	ll n;
    	cin >> n;
    	check(n);
    	cout << "\n";
	}
    return 0;
}
