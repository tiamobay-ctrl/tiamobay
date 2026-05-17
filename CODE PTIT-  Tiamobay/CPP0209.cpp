#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int cnt[100007];
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for ( int i = 0; i < n;i++) cin >> a[i];
		while(k--){
			int l,r;
			cin >> l >> r;
			int sum = 0;
			for ( int i = l - 1 ; i < r;i++){
			sum += a[i];	
			}
			cout << sum << endl;
		}
	}
}

