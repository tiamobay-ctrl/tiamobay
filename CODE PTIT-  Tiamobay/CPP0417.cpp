#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
const int MOD = (int) 1e9+7;
int main(){
	int t; cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for ( int i = 0; i < n;i++) cin >> a[i];
		int l,r;
		for ( int i = 0; i < n - 1; i++){
			if(a[i] > a[i+1]){
				l = i;
				break;
			}
		}
		for ( int i = n -1; i > 0;i--){
			if ( a[i] < a[i-1]){
				r = i;
				break;
			}
		}
		int minx = *min_element(a+l,a+r+1);
		int maxx = *max_element(a+l,a+r+1);
		for ( int i = 0; i < n - 1; i++){
			if(a[i] > minx){
				l = i;
				break;
			}
		}
		for ( int i = n - 1; i > 0;i--){
			if(a[i] < maxx){
				r = i;
				break;
			}
		}
		cout << l + 1 << " " << r + 1 << endl;
	}
}




