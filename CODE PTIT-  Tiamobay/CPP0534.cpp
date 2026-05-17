#include <bits/stdc++.h>
#include <deque>
#define ll long long
#define pi 3.141592653589793238462643383279
#define maxn 1000000
using namespace std;
bool check(string s){
	int l = s.size();
	if(l == 1) return 0;
	for ( int i = 0; i < l / 2;i++){
		if(s[i] != s[l - i - 1]) return 0;
	}
	return 1;
}
bool cmp(pair<string,int> a,pair<string,int> b){
	if(a.first.size() > b.first.size()) return 1;
	if(a.first.size() == b.first.size()){
		if(a.first > b.first) return 1;
	}
	return 0;
}
int main(){
	string s; 
	map<string,int> mp;
	while(cin >> s){
		if(check(s)) mp[s]++;
	}
	vector<pair<string,int>> v;
	for (auto it : mp){
		v.push_back(make_pair(it.first,it.second));
	}
	sort(v.begin(),v.end(),cmp);
	for (auto it : v){ 
		cout << it.first << " " << it.second << endl;
	}
}

