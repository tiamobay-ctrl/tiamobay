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
		int n,k;
		cin >> n >> k;
		int sum = 0;
		for ( int i = 1; i <= n;i++){
			sum += i % k;
		}
		if ( sum  == k) cout << "1\n";
		else cout << "0\n";
	}
}

