#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,x; cin >> n >>x;
		int a[n];
		for ( int i = 0; i < n;i++){
			cin >> a[i];
		}
		long long sum = 0;
		for ( int i = 0; i < x;i++){
			sum += a[i];
		}
		long long ans = sum;
		int l = 0;
		for ( int i = x; i < n;i++){
			sum = sum - a[i-x] + a[i];
			if(sum > ans){
				ans = sum;
				l = i - x + 1;
			}
		}
		for ( int i = l ; i < l + x;i++){
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

