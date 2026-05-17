#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int sum( int n){
	int sum = 0;
	while(n){
		sum += n % 10;
		n/= 10;
	}
	return sum;
}
int nt(int n){
	for ( int i = 2; i * i <= n;i++){
		if ( n % i == 0) return 0;
	}
	return n > 1;
}
int smith( int n){
	int sum1 = sum(n);
	int sum2 = 0;
	for ( int i = 2; i * i <= n;i++){
		while( n % i == 0){
			sum2 += sum(i);
			n/= i;
		}
	}
	if ( n != 1) sum2 += sum(n);
	return sum1 == sum2;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (smith(n) && !nt(n)) cout << "YES\n";
        else cout << "NO\n";
    }
}



