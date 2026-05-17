#include <bits/stdc++.h>
#define MOD 1000000007
#define maxn 10000006
#define maxa 102
#define PI 3.141592653589793238
using ll = long long;
using namespace std; 
int n,k; 
int f[1003][1003];
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    for ( int i = 0; i <= 1000;i++){
    	f[i][0] = f[i][i] = 1;
	}
    for ( int i = 1; i <= 1000;i++){
    	
		for ( int j = 1; j < i ;j++){
    		
			f[i][j] = (f[i-1][j] + f[i-1][j-1]) % MOD;
		
		}
	}
	int t; cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		cout << f[n][k] << endl;
	} 	
	return 0;
}


