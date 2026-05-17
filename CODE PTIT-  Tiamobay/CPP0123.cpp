#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
ll nt (ll n){
	for ( ll i = 2; i <= sqrt(n);i++){
		if ( n % i == 0) return 0;
	}
		return n > 1;
}
int main(){
		ll n;
		cin >> n;
 		if(nt(n)) cout << "YES";
 		else cout << "NO";
 		return 0;
}

    



