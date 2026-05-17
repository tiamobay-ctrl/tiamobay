#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std; 
bool cmp(pair<int,int> a,pair<int,int> b){
	if(a.second != b.second)
        return a.second > b.second; 
    return a.first < b.first;
}
int main(){

	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    vector<int> a(n),b;
	    for ( int i = 0; i < n;i++){
	    	cin >> a[i];
		}
		b = a;
		sort(b.begin(),b.end());
		for ( int i = 0; i < n;i++){
			auto it = upper_bound(b.begin(),b.end(),a[i]);
			if(it == b.end()){
				cout << "_" << " ";
			}
			else cout << *it << " ";
		}
		cout << endl;
	}
	return 0;
}

