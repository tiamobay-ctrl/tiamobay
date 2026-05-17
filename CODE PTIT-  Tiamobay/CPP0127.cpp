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
	return  n > 1;
}
void solve(){
	int n;
	cin >> n;
	int a[100];
	for ( int i = 2; i <= n / 2;i++){
		if(nt(i) && nt(n-i)){
			cout << i << " " << n - i << endl;
			return;
		}
	}
	cout <<"-1\n";
}
int main(){
    int t;
    cin >> t;
    while(t--){
    	solve();
	}
    return 0;
}



