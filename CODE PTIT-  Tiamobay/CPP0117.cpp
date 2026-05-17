#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int digitalRoot(ll n){
    if (n == 0) return 0;
    return 1 + (n - 1) % 9;
}
int main(){
	ll t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
 		int sum = 1 + ( n - 1) % 9;
		cout << sum << endl;
	}
  return 0;
}

    
