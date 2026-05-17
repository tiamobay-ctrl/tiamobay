#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll sum = 0;
        for (ll i = 1; i <= n;i++){
        		sum += i % k;
		}
		cout << sum << endl;
	}
    return 0;
}



