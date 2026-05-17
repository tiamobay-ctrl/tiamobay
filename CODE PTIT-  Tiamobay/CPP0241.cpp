#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define mod 100000007
#define maxn 100005
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for ( int i = 0; i  < n;i++) cin >> a[i];
		
		int l = 0, r = n - 1;
		int res = 0;
		while(l < r){
			if(a[l] == a[r]){
				l++; r--;
			}
			else if(a[l] < a[r]){
				a[l+1] += a[l];
				l++;
				res++;
			}
			else{
				a[r-1] += a[r];
				r--;
				res++;
			}	
		}
		cout << res << endl;
	}
}

