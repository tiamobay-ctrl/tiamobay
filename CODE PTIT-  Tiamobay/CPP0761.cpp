#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
long long mod (long long a, string b){
	long long res = 0;
	for ( char c : b){
		res = (res * 10 + (c- '0')) % a;
	}
	return res;
}
int main(){
	int t; cin >> t; 
	while(t--){
		long long a;
		string b;
		cin >> a >> b;
		long long ans = mod(a, b);
            cout << __gcd(a, ans) << endl;
	}
}


