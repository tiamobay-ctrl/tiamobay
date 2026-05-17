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
    	int n; cin >> n;
    	int a[n];
    	for ( int i = 0; i < n ;i++){
    		cin >> a[i];
		}
		int ans = 1e9;
		for ( int i = 0; i < n - 1;i++){
			for ( int j = i + 1; j < n ;j++){
				if(abs(a[i] + a[j]) < abs(ans)){
					ans = a[i] + a[j];
				}
			}
		}
		cout << ans << endl;
	}
}



