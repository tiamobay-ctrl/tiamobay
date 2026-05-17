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
        int n;
        cin >> n ;
        ll a[n+5];
		for ( int i = 0; i < n;i++){
			cin >> a[i];
		}
		sort(a,a+n);
		cout << a[n-1] << endl;
	}
	return 0;
}


