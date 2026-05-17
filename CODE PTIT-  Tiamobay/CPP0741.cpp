#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
ll power(ll x, ll y, ll p) {
    ll res = 1;
    x %= p;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;
        x = (x * x) % p;
        y >>= 1;
    }
    return res;
}

int main() {
	int t; cin >> t;
	while(t--){
		ll x,y,p;
		cin >> x >> y >> p;
		cout << power(x,y,p) << endl;
	}
    return 0;
}
	

