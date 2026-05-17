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
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;cin >> n;
		int cnt = 0;
		for ( int i = 2; i <= sqrt(n);i++){
			if (nt(i)) cnt++;
		}
		cout << cnt << endl;
	}
}

    

