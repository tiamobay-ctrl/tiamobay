#include <bits/stdc++.h>
#define ll long long
using namespace std;
const long long maxn = 1e9 + 7;
int main(){
	ifstream fi("DATA.in");
	
	int n,m;
	set<int> s1,s2;
	fi >> n >> m;
	for ( int i = 0; i < n;i++){
		int x;	fi >> x;
		s1.insert(x);
	}
	for ( int i = 0; i < m;i++){
		int x;  fi >> x;
		s2.insert(x);
	}
	map<int,int> mp;
	for (auto x : s1) mp[x]++;
	for (auto x : s2) mp[x]++;
	for ( auto x : mp){
		if(x.second >= 2){
			cout << x.first << " ";
		}
	}
	return 0;
}


