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
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
	    int n; cin >> n;
	    vector<int> a(n);
	    map<int,int> mp;
	    for ( int i = 0; i < n;i++){
	    	cin >> a[i];
	    	mp[a[i]]++;
		}
		vector<pair<int, int>> v;
		for (auto it : mp){
			v.push_back(make_pair(it.first,it.second));
		}
		sort(v.begin(),v.end(),cmp);
		for (auto x : v){
			for ( int i = 1; i <= x.second;i++){
				cout << x.first << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

