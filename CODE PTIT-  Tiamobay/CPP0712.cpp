#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int n,k,a[100], ok;
void ktao(){
	for ( int i = 1; i <= k;i++){
		a[i] = i;
	}
}
void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i ){
		i--;
	}
	if(i == 0){
		ok = 0;
	}
	else{
		a[i]++;
		for ( int j = i + 1; j <= k;j++){
			a[j] = a[j-1] + 1;
		}
	}
}
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	cin >> n >> k;
    	ok = 1;
    	ktao();
    while(ok == 1){
    	for ( int i = 1; i <= k;i++){
    		cout << a[i];
		}
		cout << " ";
		sinh();
		}
		cout << endl;
	}
	return 0;
}


