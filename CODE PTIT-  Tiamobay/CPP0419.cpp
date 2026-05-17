#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n,m; cin >> n >> m;
		int a[n],b[m];
		for ( int i = 0; i < n;i++) cin >> a[i];
		for ( int j = 0; j < m;j++) cin >> b[j];
		sort(a,a+n);
		sort(b,b+m);
		vector<int> hop,giao;
		int i = 0, j = 0;
		while(i < n && j < m){
			if(a[i] < b[j]){
				hop.push_back(a[i++]);
			}
			else if(a[i]> b[j]){
				hop.push_back(b[j++]);
			}
			else{
				hop.push_back(a[i]);
				giao.push_back(a[i]);
				i++;j++;
			}
		}
		while(i < n) hop.push_back(a[i++]);
		while(j < m) hop.push_back(b[j++]);
		for (int x : hop){
			cout << x << " ";
		}
		cout << endl;
		for ( int y : giao){
			cout << y << " ";
		}
		cout << endl;
	}
	return 0;
}


