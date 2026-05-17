#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int n,m, a[55][55];
int main(){
	int t; cin >> t;
	while(t--){
		cin >> n >> m;
		for ( int i = 0; i < n;i++){ 
			for ( int j = 0; j < m;j++){
				cin >> a[i][j];
			}
		}
		for ( int i = 1; i < n;i++){
			for(int j = 0; j < m;j++){
				if(a[i][j] == 1){
					a[i][j] += a[i-1][j];
				}
			}
		}
		int ans = 0;
		for ( int i = 0; i < n;i++){
			sort(a[i],a[i] + m,greater<int>());
			for ( int j = 0; j < m;j++){
				ans = max(ans,a[i][j] * (j+1));
			}
		}
		cout << ans << endl;
	}
}

