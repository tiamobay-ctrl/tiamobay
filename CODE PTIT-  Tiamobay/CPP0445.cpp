#include <bits/stdc++.h>
#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n ;
		int a[n];
		map<int,int> mp;
		for ( int i = 0; i < n;i++){
			cin >> a[i];
		}
		int min1 =  1e9;
		int min2  = 1e9;
		for ( int i = 0; i < n ;i++){
			if(min1 > a[i]){
				min2 = min1;
				min1 = a[i];
			}
			else if(a[i] < min2 && a[i] != min1){
				min2 = a[i];
			}
		}
		if(min2 == 1e9) cout << "-1" << endl;
		else cout << min1 << " " << min2 << endl;
	}  
}
