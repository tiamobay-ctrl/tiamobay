#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std; 
int main(){
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    ll a[n];
	    ll b[n];
	    for ( int i = 0; i < n;i++){
	    	cin >> a[i];
	    	b[i] = a[i];
		}
		a[0] = a[0] * a[1];
		a[n-1] = a[n-1] * a[n-2];
		for ( int i = 1; i < n -1;i++){
			a[i] = b[i-1] * b[i+1];
		}
		for ( int i = 0; i < n;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

